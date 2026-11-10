/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ee90; name: FUN_0053ee90
 */


undefined8 FUN_0053ee90(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + -0x10);
  lVar2 = *(long *)(param_1 + -8);
  if ((ulong)(lVar2 - lVar3) < param_3) {
    uVar1 = lVar2 * 2;
    if ((ulong)(lVar2 * 2) <= lVar2 + param_3) {
      uVar1 = lVar2 + param_3;
    }
    if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("alloc","external/upb\\upb/upb.h",0x5f,"upb_realloc");
    }
    lVar2 = (*(code *)*param_4)(param_4,*(undefined8 *)(param_1 + -0x18),lVar2,uVar1);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + -0x10);
    *(long *)(param_1 + -0x18) = lVar2;
    *(ulong *)(param_1 + -8) = uVar1;
  }
  else {
    lVar2 = *(long *)(param_1 + -0x18);
  }
  memcpy((void *)(lVar2 + lVar3),param_2,param_3);
  *(ulong *)(param_1 + -0x10) = *(long *)(param_1 + -0x10) + param_3;
  return 1;
}


