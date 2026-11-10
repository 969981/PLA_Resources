/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c60e6c; name: FUN_00c60e6c
 */


void FUN_00c60e6c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 local_48;
  long *local_38;
  
  FUN_00b5f3e4(&local_38,*(undefined8 *)(param_1 + 0xa0));
  lVar1 = param_1 + 0xa8;
  uVar3 = FUN_00b88284(local_38,lVar1);
  if ((uVar3 & 1) == 0) {
    FUN_00c611ac(local_38[0xd] + 0x2c8,lVar1,param_2 + 0x10);
  }
  else {
    FUN_00bd7bd4(local_38,lVar1);
  }
  FUN_00c38094(local_38,param_1 + 0xb0,param_2 + 0x30);
  plVar2 = local_38;
  local_48 = FUN_00cd49b0(*(undefined4 *)(param_2 + 0x20));
  FUN_00bc05f0(plVar2,param_1 + 0xb8,&local_48);
  FUN_00bc05f0(local_38,param_1 + 0xc0,param_2);
  FUN_00bc05f0(local_38,param_1 + 200,param_3);
  if ((local_38 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_38[0xb]), (uVar3 & 1) != 0)) {
    (**(code **)(*local_38 + 0x20))(local_38);
  }
  return;
}


