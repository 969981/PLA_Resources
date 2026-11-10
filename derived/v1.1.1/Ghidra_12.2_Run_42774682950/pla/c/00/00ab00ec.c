/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab00ec; name: FUN_00ab00ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00ab00ec(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_3 == 6) {
    uVar1 = 0;
    if ((param_1 != 6) || (param_2 != 0)) goto LAB_00ab011c;
    uVar2 = _DAT_0388a3c0;
    uVar3 = _UNK_0388a3c8;
  }
  else {
    if (param_3 != 5) {
      if ((param_3 == 3) && (param_2 == 0)) {
        if (param_1 == 6) {
          pcStack_38 = "OverrideRimColor";
          local_40 = 0x1eb774d1eef8fbe2;
        }
        else {
          if (param_1 != 5) goto LAB_00ab0118;
          pcStack_38 = "ObjectBlendColor";
          local_40 = 0xcd754b86c93b29e4;
        }
        local_30 = 0x1f;
        local_28 = (long *)0x0;
        uVar1 = FUN_00af0e78(3,&local_40,param_4);
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 0x20))();
        }
      }
      else {
LAB_00ab0118:
        uVar1 = 0;
      }
      goto LAB_00ab011c;
    }
    uVar1 = 0;
    if ((param_1 != 6) || (param_2 != 0)) goto LAB_00ab011c;
    uVar2 = _DAT_038890a0;
    uVar3 = _UNK_038890a8;
  }
  uVar1 = 1;
  param_4[1] = uVar3;
  *param_4 = uVar2;
LAB_00ab011c:
  return uVar1 & 1;
}


