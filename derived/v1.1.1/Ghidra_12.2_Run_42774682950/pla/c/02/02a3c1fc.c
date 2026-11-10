/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3c1fc; name: FUN_02a3c1fc
 */


void FUN_02a3c1fc(long param_1,long param_2,undefined2 *param_3,uint param_4,long *param_5,
                 int *param_6,ushort *param_7)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  long *plVar10;
  char cVar11;
  char cVar12;
  ulong uVar13;
  
  if (param_4 == 0) {
    uVar5 = 1;
  }
  else {
    cVar12 = '\0';
    cVar11 = '\0';
    uVar13 = (ulong)param_4;
    piVar9 = param_6;
    plVar10 = param_5;
    do {
      lVar6 = *plVar10;
      lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) +
                        (ulong)*(byte *)(lVar6 + 0x7d) * 8 + 0x120);
      uVar3 = *param_7;
      uVar4 = (uint)*(ushort *)(lVar7 + 0x74) * 0x10000;
      uVar2 = *(undefined1 *)(param_2 + 0x7d);
      iVar1 = 0;
      if ((uint)uVar3 * 0x10000 <= uVar4) {
        iVar1 = uVar4 + (uint)uVar3 * -0x10000;
      }
      *(short *)(lVar7 + 0x74) = (short)((uint)iVar1 >> 0x10);
      if (iVar1 == 0) {
        *(undefined1 *)(lVar7 + 0x2b0) = 3;
        *(undefined1 *)(lVar7 + 0x2b1) = uVar2;
      }
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),2,*(undefined1 *)(lVar6 + 0x7d),uVar2,uVar3,3);
      if (7 < *piVar9) {
        cVar11 = cVar11 + '\x01';
      }
      if (*piVar9 < 7) {
        cVar12 = cVar12 + '\x01';
      }
      uVar13 = uVar13 - 1;
      param_7 = param_7 + 1;
      plVar10 = plVar10 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar13 != 0);
    uVar5 = 3;
    if (cVar12 == '\0') {
      uVar5 = 1;
    }
    if (cVar11 != '\0') {
      uVar5 = 2;
    }
  }
  puVar8 = *(uint **)(param_1 + 0x18);
  uVar4 = *puVar8;
  *(undefined1 *)((long)puVar8 + (ulong)uVar4 + 8) = 0;
  *(undefined1 *)((long)puVar8 + (ulong)(uVar4 + 1) + 8) = 0xac;
  *puVar8 = uVar4 + 3;
  *(char *)((long)puVar8 + (ulong)(uVar4 + 2) + 8) = (char)(param_4 << 1);
  puVar8 = *(uint **)(param_1 + 0x18);
  if (param_4 != 0) {
    uVar13 = (ulong)param_4;
    do {
      uVar13 = uVar13 - 1;
      uVar4 = *puVar8;
      uVar2 = *(undefined1 *)(*param_5 + 0x7d);
      *puVar8 = uVar4 + 1;
      *(undefined1 *)((long)puVar8 + (ulong)uVar4 + 8) = uVar2;
      puVar8 = *(uint **)(param_1 + 0x18);
      iVar1 = *param_6;
      uVar4 = *puVar8;
      *puVar8 = uVar4 + 1;
      *(char *)((long)puVar8 + (ulong)uVar4 + 8) = (char)iVar1;
      puVar8 = *(uint **)(param_1 + 0x18);
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
    } while (uVar13 != 0);
  }
  FUN_02a3e6b8(puVar8,0x71,param_4 & 0xff,uVar5,*param_3);
  return;
}


