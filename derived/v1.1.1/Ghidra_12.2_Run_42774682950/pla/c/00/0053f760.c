/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f760; name: FUN_0053f760
 */


undefined8 FUN_0053f760(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t __n;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_60;
  long lStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  void *local_48;
  
  iVar3 = 1 << (ulong)(param_2 & 0x1f);
  bVar4 = (param_2 & 0xff) != 0;
  lStack_58 = 0;
  if (bVar4) {
    lStack_58 = (long)iVar3 + -1;
  }
  local_60 = 0;
  local_50 = (undefined1)param_2;
  __n = 0;
  if (bVar4) {
    __n = ((long)iVar3 + (long)iVar3 * 2) * 8;
  }
  if ((param_2 & 0xff) == 0) {
    local_48 = (void *)0x0;
  }
  else {
    if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("alloc","external/upb\\upb/upb.h",0x59,"upb_malloc");
    }
    local_48 = (void *)(*(code *)*param_3)(param_3,0,0,__n);
    if (local_48 == (void *)0x0) {
      return 0;
    }
    memset(local_48,0,__n);
  }
  bVar2 = *(byte *)(param_1 + 2);
  uVar6 = (uint)bVar2;
  uVar7 = (ulong)(1 << (ulong)(bVar2 & 0x1f));
  uVar9 = uVar7 - 1;
  lVar8 = 0;
  uVar10 = 0xffffffffffffffff;
  if (bVar2 == 0) {
    uVar9 = 0xffffffffffffffff;
  }
  do {
    if (uVar9 == uVar10) {
      uVar10 = 0xfffffffffffffffe;
      uVar9 = 0;
      if (bVar2 != 0) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0xffffffffffffffff) goto LAB_0053f8f8;
      goto LAB_0053f850;
    }
    uVar10 = uVar10 + 1;
    plVar1 = (long *)(param_1[3] + lVar8);
    lVar8 = lVar8 + 0x18;
  } while (*plVar1 == 0);
  uVar9 = 0;
  if (bVar2 != 0) {
    uVar9 = uVar7;
  }
  if (uVar10 < uVar9) {
LAB_0053f850:
    lVar8 = param_1[3];
    puVar5 = *(undefined4 **)(lVar8 + uVar10 * 0x18);
    while (puVar5 != (undefined4 *)0x0) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = (long)(1 << (ulong)(uVar6 & 0x1f));
      }
      if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!upb_strtable_done(i)","external/upb/upb/table.c",0x17e,
                      "upb_strtable_iter_key");
      }
      lVar11 = uVar10 * 0x18;
      FUN_0053fb10(&local_60,puVar5 + 1,*puVar5,*(undefined8 *)(lVar8 + lVar11 + 8),param_3);
      uVar6 = (uint)*(byte *)(param_1 + 2);
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = (long)(1 << (ulong)(uVar6 & 0x1f));
      }
      do {
        lVar11 = lVar11 + 0x18;
        uVar10 = uVar10 + 1;
        if (uVar9 <= uVar10) {
          uVar10 = 0xfffffffffffffffe;
          break;
        }
      } while (*(long *)(param_1[3] + lVar11) == 0);
      if (uVar9 <= uVar10) break;
      lVar8 = param_1[3];
      puVar5 = *(undefined4 **)(lVar8 + uVar10 * 0x18);
    }
  }
LAB_0053f8f8:
  if (uVar6 != 0) {
    if (param_3 == (undefined8 *)0x0) goto LAB_0053f9b0;
    lVar8 = 0;
    uVar10 = 0;
    do {
      (*(code *)*param_3)(param_3,*(undefined8 *)(param_1[3] + lVar8),0,0);
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x18;
      uVar9 = 0;
      if (*(byte *)(param_1 + 2) != 0) {
        uVar9 = (long)(1 << (ulong)(*(byte *)(param_1 + 2) & 0x1f));
      }
    } while (uVar10 < uVar9);
  }
  if (param_3 != (undefined8 *)0x0) {
    (*(code *)*param_3)(param_3,param_1[3],0,0);
    param_1[1] = lStack_58;
    *param_1 = local_60;
    param_1[3] = local_48;
    param_1[2] = CONCAT71(uStack_4f,local_50);
    return 1;
  }
LAB_0053f9b0:
                    /* WARNING: Subroutine does not return */
  __assert_fail("alloc","external/upb\\upb/upb.h",100,"upb_free");
}


