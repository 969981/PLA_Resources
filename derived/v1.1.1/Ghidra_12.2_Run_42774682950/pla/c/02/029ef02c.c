/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ef02c; name: FUN_029ef02c
 */


void FUN_029ef02c(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined2 local_70;
  undefined2 local_6e;
  uint local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  if ((char)param_3[3] != '\0') {
    uVar15 = 0;
    do {
      plVar2 = (long *)param_3[5];
      bVar5 = *(byte *)((long)plVar2 + 0x5a);
      uVar10 = (ulong)bVar5;
      lVar9 = *(long *)(param_3[4] + uVar15 * 8);
      sVar7 = *(short *)(param_3[4] + uVar15 * 2 + 0x28);
      if (lVar9 == 0) {
LAB_029ef1c4:
        if ((uVar10 & 0xff) != 0) goto LAB_029ef1cc;
      }
      else {
        if (bVar5 < 6) {
          plVar11 = plVar2;
          uVar12 = uVar10;
          if (bVar5 != 0) {
            do {
              if (*plVar11 == lVar9) goto LAB_029ef1c4;
              uVar12 = uVar12 - 1;
              plVar11 = plVar11 + 1;
            } while (uVar12 != 0);
          }
          plVar2[uVar10] = lVar9;
          *(undefined1 *)((long)plVar2 + (ulong)*(byte *)((long)plVar2 + 0x5a) + 0x48) = 0;
          *(undefined2 *)((long)plVar2 + (ulong)*(byte *)((long)plVar2 + 0x5a) * 2 + 0x30) = 0;
          *(undefined2 *)((long)plVar2 + (ulong)*(byte *)((long)plVar2 + 0x5a) * 2 + 0x3c) = 0;
          uVar1 = *(byte *)((long)plVar2 + 0x5a) + 1;
          uVar10 = (ulong)uVar1;
          *(char *)((long)plVar2 + 0x5a) = (char)uVar1;
          if ((uVar1 & 0xff) <= (uint)*(byte *)((long)plVar2 + 0x5b)) goto LAB_029ef1c4;
          *(char *)((long)plVar2 + 0x5b) = (char)uVar1;
        }
LAB_029ef1cc:
        uVar12 = 0;
        do {
          if (plVar2[uVar12] == lVar9) {
            *(short *)((long)plVar2 + uVar12 * 2 + 0x30) =
                 *(short *)((long)plVar2 + uVar12 * 2 + 0x30) + sVar7;
            *(undefined1 *)((long)plVar2 + uVar12 + 0x48) = 1;
            uVar10 = (ulong)*(byte *)((long)plVar2 + 0x5a);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uVar10 & 0xff));
      }
      lVar17 = uVar15 * 8;
      lVar13 = *(long *)(param_3[4] + lVar17);
      uVar6 = *(undefined2 *)(param_3[4] + uVar15 * 2 + 0x28);
      puVar8 = (uint *)param_3[2];
      uVar4 = *(undefined1 *)((long)puVar8 + 10);
      uVar1 = puVar8[3];
      lVar9 = param_3[1];
      lVar16 = *param_3;
      local_67 = *(undefined1 *)(lVar16 + 0x7d);
      lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x40) + 0x20);
      uVar3 = *puVar8;
      local_70 = (undefined2)uVar3;
      local_6e = uVar6;
      local_6c = uVar1;
      local_68 = uVar4;
      local_66 = (char)lVar9;
      FUN_02952ce8(*(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0x10) + 8) +
                     (ulong)*(byte *)(lVar13 + 0x7d) * 8 + 0x120),&local_70);
      FUN_02a3e6b8(*(undefined8 *)(lVar14 + 0x18),0x3f,*(undefined1 *)(lVar13 + 0x7d),
                   *(undefined1 *)(lVar16 + 0x7d),(char)lVar9,uVar4,uVar1,uVar3 & 0xffff,uVar6);
      uVar15 = uVar15 + 1;
      lVar9 = *(long *)(param_3[4] + lVar17);
      *(byte *)(lVar9 + 900) = *(byte *)(lVar9 + 900) | 4;
    } while (uVar15 < *(byte *)(param_3 + 3));
  }
  return;
}


