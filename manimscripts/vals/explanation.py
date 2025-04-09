from manim import *
TEXT_HEIGHT = config.frame_height-LARGE_BUFF
BOX_HEIGHT = 1.0
BOX_WIDTH = 1.0
BOX_BUFFER = 0  # space between boxes
BOX_STROKE_WIDTH = 2
INITIAL_BOX_COLOR = GREY_B
INITIAL_FILL_COLOR = GREY_D
INITIAL_FILL_OPACITY = 0.3
HIGHLIGHT_COLOR = BLUE_C
TEXT_COLOR = WHITE
ARROW_COLOR = YELLOW
ARROW_BUFFER = 0.3 # space between arrow tip and box top

class array_init(Scene):
    def construct(self):
        # self.play(Write(intro_text))
        # self.wait(1)
        # self.play(FadeOut(intro_text))
        # self.wait(0.5)
        
        array_data = [1,2,3,4,5,6,7]

        def create_element(value, box_color=INITIAL_BOX_COLOR, fill_color=INITIAL_FILL_COLOR, fill_opacity=INITIAL_FILL_OPACITY):
            box = Rectangle(
                height=BOX_HEIGHT,
                width=BOX_WIDTH,
                stroke_color=box_color,
                stroke_width=BOX_STROKE_WIDTH,
                # stroke_opacity=0.8,
                fill_color=fill_color,
                fill_opacity=fill_opacity
            )
            # box.set_stroke(dash_length=0.05)

            text = Text(str(value), color=TEXT_COLOR).scale(0.8)
            text.move_to(box.get_center())

            element = VGroup(box, text)
            return element

        # the actual array objrct
        elements = VGroup(*[create_element(val) for val in array_data])
        elements.arrange(RIGHT, buff=BOX_BUFFER)
        elements.center()

        # adds the actual indices to the array
        index_labels = VGroup()
        for i, element in enumerate(elements):
             index_label = Text(str(i), color=GREY_A).scale(0.6)
             index_label.next_to(element, DOWN, buff=0.3)
             index_labels.add(index_label)

        array_group = VGroup(elements, index_labels).center() # group and center

        # animate
        array_init_text = Text("int arr[10] = {1, 2, 3, 4, 5, 6, 7};").scale(0.8).move_to([0, 8/3, 0]) #ex text
        creation_anims = [Create(elem[0]) for elem in elements] # crteate the actual boxes
        text_anims = [Write(elem[1]) for elem in elements] # write the text
        index_anims = [Write(label) for label in index_labels] # write indices

        #plays
        self.play(Write(array_init_text))
        self.play(AnimationGroup(*creation_anims, lag_ratio=0.1), run_time=2)
        self.play(AnimationGroup(*text_anims, lag_ratio=0.1), run_time=2)
        self.wait(1)
        self.play(AnimationGroup(*index_anims, lag_ratio=0.1), run_time=1.5)


        #ARRAY ACCESSING video portion
        array_accessing_text = Text("a[5]").scale(0.8).move_to([0, 8/3, 0])

        #getting value 6 with index 5
        first_element_box = elements[5][0]
        self.play(
            first_element_box.animate.set_style(
                fill_opacity=0.6, fill_color=HIGHLIGHT_COLOR, stroke_color=HIGHLIGHT_COLOR
            ),
            run_time=0.5
        )