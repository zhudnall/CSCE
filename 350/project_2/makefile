#Makefile

SCP: SingleCycleProc.v 
	vcs -R SingleCycleProc.v ALU_Control_Unit.v CPU_Control_Unit.v ALU_behav.v RegFile.v m555.v mux.v signextend.v IdealMemory.v lshift2.v ProgramCounter.v

clean:
	rm simv
	rm -r csrc
	rm .vcsmx_rebuild