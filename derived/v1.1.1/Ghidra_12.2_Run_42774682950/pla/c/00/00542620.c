/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00542620; name: FUN_00542620
 */


undefined8 FUN_00542620(long *param_1,ulong param_2)

{
  void *__dest;
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  size_t sVar5;
  undefined1 *puVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = param_1[1];
  lVar2 = param_1[2];
  if ((ulong)(lVar2 - lVar4) < 10) {
    uVar9 = 0x80;
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 << 1;
    } while (uVar8 < (param_1[3] - lVar2) + 10U);
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("alloc","external/upb\\upb/upb.h",0x5f,"upb_realloc");
    }
    sVar5 = param_1[3] - lVar4;
    lVar4 = (*(code *)*puVar3)(puVar3,lVar4,sVar5,uVar8);
    if (lVar4 == 0) {
      return 0;
    }
    if (sVar5 != 0) {
      memmove((void *)((lVar4 + uVar8) - sVar5),(void *)param_1[1],sVar5);
    }
    lVar2 = lVar4 + uVar8 + (param_1[2] - param_1[3]);
    param_1[2] = lVar2;
    param_1[3] = lVar4 + uVar8;
    puVar6 = (undefined1 *)(lVar2 + -10);
    param_1[1] = lVar4;
    param_1[2] = (long)puVar6;
  }
  else {
    puVar6 = (undefined1 *)(lVar2 + -10);
    param_1[2] = (long)puVar6;
  }
  if (param_2 < 0x80) {
    *puVar6 = (char)param_2;
    sVar5 = 1;
  }
  else {
    sVar7 = 0;
    do {
      uVar9 = param_2 >> 7;
      bVar1 = (byte)param_2 & 0x7f;
      if (uVar9 != 0) {
        bVar1 = (byte)param_2 | 0x80;
      }
      sVar5 = sVar7 + 1;
      puVar6[sVar7] = bVar1;
      sVar7 = sVar5;
      param_2 = uVar9;
    } while (uVar9 != 0);
  }
  __dest = (void *)(param_1[2] + (10 - sVar5));
  memmove(__dest,(void *)param_1[2],sVar5);
  param_1[2] = (long)__dest;
  return 1;
}


