/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00784290; name: FUN_00784290
 */


void FUN_00784290(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  puVar1 = PTR_DAT_04376cd0 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)param_2;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  FUN_00782ef8(plVar2 + 4);
  plVar2[4] = (long)(PTR_DAT_04376cd8 + 0x10);
  nn::os::InitializeEvent((EventType *)(plVar2 + 6),0,0);
  nn::os::SignalEvent((EventType *)(plVar2 + 6));
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


