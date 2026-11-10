/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002092f0; name: FUN_002092f0
 */


undefined8 FUN_002092f0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(lVar3 + 8);
  if (*(int *)(param_2 + 8) == 0) {
    if (lVar2 != 0) goto LAB_0020933c;
  }
  else if (lVar2 == 0) {
    lVar2 = FUN_00205cf4(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xdc) == 3) {
      return 0;
    }
LAB_0020933c:
    if (*(long *)(lVar3 + 0x18) != 0) {
      if (*(code **)(param_1 + 0x7e8) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      goto joined_r0x0020935c;
    }
  }
  if (*(code **)(param_1 + 0x7f0) == (code *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0x7f0))
                    (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8b8));
joined_r0x0020935c:
  if (iVar1 == 0) {
    return 0;
  }
  return 0xfffffc7a;
}


