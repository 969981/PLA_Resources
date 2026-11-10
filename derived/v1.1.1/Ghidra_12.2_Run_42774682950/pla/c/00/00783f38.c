/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783f38; name: FUN_00783f38
 */


void FUN_00783f38(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x38,8);
  puVar1 = PTR_DAT_04376cc0 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)param_2;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  *(undefined1 *)(plVar2 + 4) = 0;
  nn::os::SdkMutexType::Initialize();
  plVar2[5] = (long)(plVar2 + 5);
  plVar2[6] = (long)(plVar2 + 5);
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


