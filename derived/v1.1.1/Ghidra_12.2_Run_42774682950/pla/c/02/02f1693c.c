/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1693c; name: FUN_02f1693c
 */


void FUN_02f1693c(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_40 = 0x400000000;
  local_38 = 0;
  if (param_3 == -1) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_02ef21f4(DAT_0440a140);
  }
  local_60 = 0;
  local_68 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  local_70 = puVar2;
  FUN_02ee0d64(param_1,DAT_0440a160,param_2,&local_70,&local_40,1,0);
  if ((puVar2 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(puVar2 + 10), *(int *)(puVar2 + 10) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d150)(4,puVar2);
  }
  return;
}


