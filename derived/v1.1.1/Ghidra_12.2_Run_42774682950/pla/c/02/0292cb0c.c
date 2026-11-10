/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292cb0c; name: FUN_0292cb0c
 */


undefined8
FUN_0292cb0c(ulong param_1,undefined8 param_2,long param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_3 + 0x24) == '\0') {
    return 0;
  }
  if (((*(char *)(param_3 + 0x26) != '\0') && (iVar1 = *(int *)(param_3 + 0x28), 1 < iVar1 - 1U)) &&
     (iVar1 != 4)) {
    if (iVar1 != 3) {
      return 0;
    }
    if ((*(char *)(param_3 + 0x12) == '\0') && (*(char *)(param_3 + 0xa8) == '\0')) {
      if (*(int *)(param_3 + 0x94) != 5) {
        if (((*PTR_DAT_04379e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar1 != 0)) {
          FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379e40);
        }
        lVar3 = *(long *)PTR_DAT_04379e48;
        *(long *)PTR_DAT_04379e50 = lVar3;
        *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(lVar3 + 0x3d8);
        return 0;
      }
    }
    else {
      FUN_0292d3a4(param_1,param_3 + 0x38,4);
    }
  }
  *(undefined1 *)(param_3 + 0x25) = 1;
  if (*(int *)(param_3 + 0x94) == 5) {
    *(undefined4 *)(param_3 + 0x94) = 0;
  }
  if (*(int *)(param_3 + 0x28) - 1U < 2) {
    param_1 = (ulong)*(uint *)(param_3 + 0x30);
    param_4 = *(undefined4 *)(param_3 + 0x34);
  }
  uVar2 = FUN_0292c710(param_1,param_2,param_3,param_4,param_5 & 1);
  return uVar2;
}


