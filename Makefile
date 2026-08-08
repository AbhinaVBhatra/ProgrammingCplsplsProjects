.PHONY: clean All

All:
	@echo "----------Building project:[ OperationalList - Debug ]----------"
	@cd "OperationalList" && "$(MAKE)" -f  "OperationalList.mk"
clean:
	@echo "----------Cleaning project:[ OperationalList - Debug ]----------"
	@cd "OperationalList" && "$(MAKE)" -f  "OperationalList.mk" clean
