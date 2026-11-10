/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e966c; name: FUN_029e966c
 */


void FUN_029e966c(long param_1,byte *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  int *piVar13;
  
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x82);
  FUN_029e9904(param_1,*param_3,param_3[1]);
  lVar10 = *param_3;
  uVar3 = (ulong)*(byte *)(lVar10 + 0x30);
  if (uVar3 == 0) {
    bVar9 = 0;
    bVar5 = 0;
  }
  else {
    piVar13 = (int *)param_3[1];
    bVar9 = 0;
    bVar1 = false;
    lVar12 = 0;
    lVar6 = uVar3 - 1;
    while( true ) {
      if (((uint)lVar12 & 0xff) < (uint)uVar3) {
        lVar8 = *(long *)(lVar10 + lVar12 * 8);
        iVar2 = *piVar13;
      }
      else {
        lVar8 = 0;
        iVar2 = *piVar13;
      }
      if (((iVar2 != 0) && (iVar2 = FUN_029506a8(lVar8,0xf), iVar2 < 100)) && (*piVar13 != 0)) {
        if (*(char *)((long)piVar13 + 0xd) == '\0') {
          lVar4 = *(long *)(param_1 + 0x20);
          lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) +
                            (ulong)*(byte *)(lVar8 + 0x7d) * 8 + 0x120);
          *(int *)(lVar8 + 700) = *(int *)(lVar8 + 700) + *piVar13;
          FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x53);
          bVar9 = 1;
        }
        else {
          bVar1 = true;
        }
      }
      if (lVar6 == lVar12) break;
      uVar3 = (ulong)*(byte *)(lVar10 + 0x30);
      lVar12 = lVar12 + 1;
      piVar13 = piVar13 + 4;
    }
    if (bVar1) {
      lVar10 = *param_3;
      uVar3 = (ulong)*(byte *)(lVar10 + 0x30);
      if (uVar3 == 0) {
        bVar5 = 0;
      }
      else {
        piVar13 = (int *)param_3[1];
        bVar5 = 0;
        lVar12 = 0;
        lVar6 = uVar3 - 1;
        while( true ) {
          if (((uint)lVar12 & 0xff) < (uint)uVar3) {
            lVar8 = *(long *)(lVar10 + lVar12 * 8);
            iVar2 = *piVar13;
          }
          else {
            lVar8 = 0;
            iVar2 = *piVar13;
          }
          if (((iVar2 != 0) && (iVar2 = FUN_029506a8(lVar8,0xf), iVar2 < 100)) &&
             ((*piVar13 != 0 && (*(char *)((long)piVar13 + 0xd) != '\0')))) {
            lVar4 = *(long *)(param_1 + 0x20);
            lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) +
                              (ulong)*(byte *)(lVar8 + 0x7d) * 8 + 0x120);
            *(int *)(lVar8 + 700) = *(int *)(lVar8 + 700) + *piVar13;
            FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x53);
            bVar5 = 1;
          }
          if (lVar6 == lVar12) break;
          uVar3 = (ulong)*(byte *)(lVar10 + 0x30);
          lVar12 = lVar12 + 1;
          piVar13 = piVar13 + 4;
        }
      }
    }
    else {
      bVar5 = 0;
    }
  }
  uVar3 = (ulong)*(byte *)((long *)*param_3 + 6);
  if (uVar3 != 0) {
    puVar11 = (undefined1 *)(param_3[1] + 9);
    plVar7 = (long *)*param_3;
    do {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x83,
                   *(undefined1 *)(*plVar7 + 0x7d),*(undefined4 *)(puVar11 + -9),puVar11[-5],
                   puVar11[-4],puVar11[-3],puVar11[-1],*puVar11,puVar11[-2]);
      uVar3 = uVar3 - 1;
      puVar11 = puVar11 + 0x10;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x84);
  *param_2 = bVar5 | bVar9;
  return;
}


