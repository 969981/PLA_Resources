/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f0c0; name: FUN_0053f0c0
 */


undefined8 FUN_0053f0c0(long *param_1,void *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  
  puVar8 = (ulong *)*param_1;
  if (puVar8 == (ulong *)0x0) {
    puVar8 = *(ulong **)(param_4 + 8);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar8) < 0x20) {
      puVar8 = (ulong *)FUN_0053f330(param_4,0x20);
    }
    else {
      *(ulong **)(param_4 + 8) = puVar8 + 4;
    }
    if (puVar8 != (ulong *)0x0) {
      *puVar8 = (ulong)(byte)(&DAT_03a2b20b)[param_3 & 0xffffffff];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *param_1 = (long)puVar8;
    }
  }
  if (puVar8 == (ulong *)0x0) {
LAB_0053f234:
    uVar7 = 0;
  }
  else {
    uVar3 = puVar8[1];
    uVar5 = puVar8[2];
    uVar1 = uVar3 + 1;
    if (uVar5 < uVar1) {
      uVar9 = *puVar8;
      uVar10 = uVar5;
      if (uVar5 < 5) {
        uVar10 = 4;
      }
      do {
        uVar6 = uVar10;
        uVar10 = uVar6 << 1;
      } while (uVar6 < uVar1);
      uVar2 = (uint)uVar9 & 7;
      uVar10 = (ulong)uVar2;
      __n = uVar5 << uVar10;
      uVar5 = (uVar6 << uVar10) + 0xf & 0xfffffffffffffff0;
      __dest = *(void **)(param_4 + 8);
      if ((ulong)(*(long *)(param_4 + 0x10) - (long)__dest) < uVar5) {
        __dest = (void *)FUN_0053f330(param_4);
        if (__n != 0) goto LAB_0053f188;
LAB_0053f1f0:
        if (__dest == (void *)0x0) goto LAB_0053f234;
      }
      else {
        *(ulong *)(param_4 + 8) = (long)__dest + uVar5;
        if (__n == 0) goto LAB_0053f1f0;
LAB_0053f188:
        if (__dest == (void *)0x0) goto LAB_0053f1f0;
        memcpy(__dest,(void *)(uVar9 & 0xfffffffffffffff8),__n);
      }
      if (4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("elem_size_lg2 <= 4","external/upb/upb/msg.c",0x1a,"tag_arrptr");
      }
      uVar10 = (ulong)__dest | uVar10;
      *puVar8 = uVar10;
      puVar8[2] = uVar6;
    }
    else {
      uVar10 = *puVar8;
    }
    bVar4 = (&DAT_03a2b20b)[param_3 & 0xffffffff];
    uVar7 = 1;
    puVar8[1] = uVar1;
    memcpy((void *)((uVar10 & 0xfffffffffffffff8) + (uVar3 << ((ulong)bVar4 & 0x3f))),param_2,
           (long)(1 << (ulong)(bVar4 & 0x1f)));
  }
  return uVar7;
}


