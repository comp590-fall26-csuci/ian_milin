SRC_DIRS := ./590MakefileLab
BUILD_DIR := $(SRC_DIRS)/build
OBJS := $(addprefix $(BUILD_DIR)/,fibonacci.o main.o)

$(BUILD_DIR)/fibonacci: $(OBJS)
	gcc $(OBJS) -o $@

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIRS)/%.c
	mkdir -p $(BUILD_DIR)
	gcc -I$(SRC_DIRS)/headers -MMD -MP -c $^ -o $@

.PHONY: run
run: $(BUILD_DIR)/fibonacci
	$(BUILD_DIR)/fibonacci

.PHONY: clean
clean:
	rm -fr $(BUILD_DIR)
