/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e4404; name: FUN_029e4404
 */


void FUN_029e4404(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_70 [8];
  long local_68;
  
  *param_2 = 0;
  lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  lVar8 = *(long *)(lVar12 + (ulong)*param_3 * 8);
  if (((((*(byte *)(lVar8 + 0x87) >> 6 & 1) == 0) &&
       (lVar12 = *(long *)(lVar12 + (ulong)param_3[1] * 8), (*(byte *)(lVar12 + 0x87) >> 6 & 1) == 0
       )) && ((*(byte *)(lVar8 + 0x387) & 0x78) == 0)) &&
     (((iVar5 = FUN_029506a8(lVar8,0x10), (*(byte *)(lVar8 + 0x87) >> 5 & 1) == 0 &&
       ((*(byte *)(lVar12 + 0x87) >> 5 & 1) == 0)) && (*(short *)(lVar12 + 0x496) == 0)))) {
    FUN_02973a70(*(undefined8 *)(param_1 + 0x38),lVar8);
    if ((param_3[2] != 0) && (*(char *)(lVar8 + 0x7d) != '\x1f')) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar8 + 0x7d),0)
      ;
    }
    lVar14 = *(long *)(param_1 + 0x20);
    bVar4 = *(byte *)(lVar8 + 0x7d);
    bVar1 = *(byte *)(lVar12 + 0x7d);
    lVar9 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0x10) + 8) + 0x120;
    FUN_02952d9c(*(undefined8 *)(lVar9 + (ulong)bVar4 * 8),*(undefined8 *)(lVar9 + (ulong)bVar1 * 8)
                );
    FUN_02a3e6b8(*(undefined8 *)(lVar14 + 0x18),0x55,(ulong)bVar4,(ulong)bVar1);
    uVar2 = *(undefined1 *)(lVar12 + 0x7d);
    lVar9 = *(long *)(param_1 + 0x20);
    lVar12 = *(long *)(lVar9 + 0x20);
    uVar11 = (ulong)*(byte *)(lVar8 + 0x7d);
    FUN_02a17af0(*(undefined8 *)(lVar12 + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x10) + 8) + uVar11 * 8 + 0x120));
    FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x59,uVar11);
    lVar9 = *(long *)(param_1 + 0x20);
    lVar12 = *(long *)(lVar9 + 0x20);
    FUN_02a38210(*(undefined8 *)(lVar12 + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x10) + 8) + uVar11 * 8 + 0x120));
    FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x5b,uVar11);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined1 *)(lVar8 + 0x7d);
    uVar6 = FUN_029506a8(lVar8,0x10);
    FUN_02a3cc80(uVar13,uVar3,uVar6);
    bVar4 = FUN_029679e0(uVar15,uVar3,&local_68);
    if (bVar4 != 0) {
      uVar16 = (ulong)bVar4;
      plVar10 = &local_68;
      do {
        FUN_02a3cc80(uVar13,uVar3,(int)*plVar10);
        uVar16 = uVar16 - 1;
        plVar10 = (long *)((long)plVar10 + 4);
      } while (uVar16 != 0);
    }
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x92,uVar11,uVar2);
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
    if (((param_3[2] != 0) && (lVar8 != 0)) && (*(char *)(lVar8 + 0x7d) != '\x1f')) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
    }
    iVar7 = FUN_029506a8(lVar8,0x11);
    if ((iVar5 != iVar7) &&
       (FUN_02973d0c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0xa0) + 0x38),
                     *(undefined1 *)(lVar8 + 0x7d)), (*(byte *)(lVar8 + 0x120) & 7) == 0)) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 0xc0);
      if ((iVar5 == 0x67) || (iVar7 == 0x52)) {
        lVar14 = *(long *)(*(long *)(lVar12 + 0x60) + 800);
        lVar9 = *(long *)(*(long *)(*(long *)(lVar14 + 0x10) + 8) +
                          (ulong)*(byte *)(lVar8 + 0x7d) * 8 + 0x120);
        if (*(short *)(lVar9 + 0x76) != 0) {
          FUN_029825a0(*(undefined8 *)(lVar14 + 0x38),lVar9,7);
        }
      }
      if (iVar5 == 0x7f) {
        local_68 = lVar8;
        FUN_029ea38c(*(undefined8 *)(*(long *)(lVar12 + 0x60) + 0x1360),auStack_70,&local_68);
      }
    }
    *param_2 = 1;
  }
  return;
}


