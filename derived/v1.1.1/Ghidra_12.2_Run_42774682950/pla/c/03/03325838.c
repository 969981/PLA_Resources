/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325838; name: FUN_03325838
 */


void FUN_03325838(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_03325dbc();
  *param_1 = &PTR_LAB_04350570;
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_2 != 0) {
    FUN_032d645c(param_2);
  }
  iVar1 = 0x10000;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar4;
  }
  uVar3 = FUN_032cf7a8(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x58),(long)iVar1,0x40);
  param_1[4] = uVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  *(int *)((long)param_1 + 0x2c) = iVar1;
  return;
}


