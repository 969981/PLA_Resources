/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ff60; name: FUN_0053ff60
 */


void FUN_0053ff60(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 uint param_6,code *param_7,code *param_8)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if ((char)param_1[2] != '\0') {
    plVar6 = (long *)(param_1[3] + (param_1[1] & (ulong)param_6) * 0x18);
    if (*plVar6 != 0) {
      uVar2 = (*param_8)(*plVar6,param_2,param_3);
      if ((uVar2 & 1) == 0) {
        do {
          plVar6 = (long *)plVar6[2];
          if (plVar6 == (long *)0x0) goto LAB_00540014;
          uVar2 = (*param_8)(*plVar6,param_2,param_3);
        } while ((uVar2 & 1) == 0);
LAB_0053fff0:
                    /* WARNING: Subroutine does not return */
        __assert_fail("findentry(t, key, hash, eql) == ((void*)0)","external/upb/upb/table.c",0xa5,
                      "insert");
      }
      if (plVar6 != (long *)0x0) goto LAB_0053fff0;
    }
  }
LAB_00540014:
  plVar8 = (long *)param_1[3];
  uVar2 = param_1[1] & (ulong)param_6;
  *param_1 = *param_1 + 1;
  plVar6 = plVar8 + uVar2 * 3;
  if (*plVar6 == 0) {
    plVar8[uVar2 * 3 + 2] = 0;
    *plVar6 = param_4;
    plVar6[1] = param_5;
    cVar1 = (char)param_1[2];
    plVar7 = plVar6;
  }
  else {
    lVar9 = 0;
    if (*(byte *)(param_1 + 2) != 0) {
      lVar9 = (long)(1 << (ulong)(*(byte *)(param_1 + 2) & 0x1f));
    }
    plVar5 = plVar8 + lVar9 * 3;
    while (plVar7 = plVar5 + -3, *plVar7 != 0) {
      plVar5 = plVar7;
      if (plVar7 <= plVar8) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("e > t->entries","external/upb/upb/table.c",0x78,"emptyent");
      }
    }
    uVar3 = (*param_7)();
    plVar4 = (long *)(param_1[3] + (param_1[1] & uVar3 & 0xffffffff) * 0x18);
    if (plVar4 == plVar6) {
      plVar5[-1] = plVar8[uVar2 * 3 + 2];
      plVar8[uVar2 * 3 + 2] = (long)plVar7;
    }
    else {
      lVar10 = plVar6[1];
      lVar9 = *plVar6;
      plVar5[-1] = plVar6[2];
      plVar5[-2] = lVar10;
      *plVar7 = lVar9;
      while (plVar5 = (long *)plVar4[2], plVar5 != plVar6) {
        plVar4 = plVar5;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("chain","external/upb/upb/table.c",0xc0,"insert");
        }
      }
      plVar4[2] = (long)plVar7;
      plVar8[uVar2 * 3 + 2] = 0;
      plVar7 = plVar6;
    }
    *plVar7 = param_4;
    plVar7[1] = param_5;
    cVar1 = (char)param_1[2];
  }
  if (cVar1 != '\0') {
    plVar6 = (long *)(param_1[3] + (param_1[1] & (ulong)param_6) * 0x18);
    if (*plVar6 != 0) {
      uVar2 = (*param_8)(*plVar6,param_2,param_3);
      while (((uVar2 & 1) == 0 && (plVar6 = (long *)plVar6[2], plVar6 != (long *)0x0))) {
        uVar2 = (*param_8)(*plVar6,param_2,param_3);
      }
      goto LAB_005401b0;
    }
  }
  plVar6 = (long *)0x0;
LAB_005401b0:
  if (plVar6 != plVar7) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("findentry(t, key, hash, eql) == our_e","external/upb/upb/table.c",0xc9,"insert");
  }
  return;
}


