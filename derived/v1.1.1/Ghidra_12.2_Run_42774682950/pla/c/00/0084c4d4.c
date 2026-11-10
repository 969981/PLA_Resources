/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084c4d4; name: FUN_0084c4d4
 */


void FUN_0084c4d4(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  
  lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
  if (*(char *)(lVar5 + 0x1f) != '\0') {
    uVar9 = (ulong)(param_3 >> 3) & 0x1c;
    *(uint *)((long)param_1 + uVar9 + 0x518) =
         *(uint *)((long)param_1 + uVar9 + 0x518) | 1 << (ulong)(param_3 & 0x1f);
    cVar2 = *(char *)(param_2 + 9);
    lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
    if ((cVar2 != *(char *)(lVar5 + 0x1e)) &&
       (cVar2 = *(char *)(param_2 + 9), lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3),
       cVar2 == (char)(*(char *)(lVar5 + 0x1e) + '\x01'))) {
      lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
      uVar6 = *(ushort *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x20) = 0xffff;
      uVar7 = (uint)uVar6;
      if (uVar7 == 0xffff) {
LAB_0084c684:
        (**(code **)(*param_1 + 0x40))(param_1,param_3);
        FUN_0084f554();
        return;
      }
      sVar10 = *(short *)(lVar5 + 0x1a);
      iVar8 = 0;
      if (sVar10 != 0) goto LAB_0084c5cc;
      do {
        uVar12 = (uint)*(ushort *)(lVar5 + 0x10);
        uVar11 = *(uint *)(lVar5 + 0x14);
LAB_0084c600:
        do {
          uVar11 = uVar12 + 1 + uVar11;
          do {
            uVar11 = uVar11 - uVar12;
          } while (uVar12 <= uVar11);
          if (sVar10 == 0) {
            sVar10 = 0;
            sVar4 = *(short *)(lVar5 + 0x1c);
          }
          else {
            sVar10 = sVar10 + -1;
            *(short *)(lVar5 + 0x1a) = sVar10;
            sVar4 = *(short *)(lVar5 + 0x1c);
          }
          if (sVar4 == 0) {
            uVar6 = uVar6 + 1;
            *(uint *)(lVar5 + 0x14) = uVar11;
            *(undefined2 *)(lVar5 + 0x1c) = 0;
            *(ushort *)(lVar5 + 0x18) = uVar6;
            goto joined_r0x0084c680;
          }
          *(short *)(lVar5 + 0x1c) = sVar4 + -1;
        } while (((short)(sVar4 + -1) != 0) &&
                (((sVar10 == 0 ||
                  (pcVar13 = (char *)(*(long *)(lVar5 + 8) + (ulong)uVar11 * 0x5b8),
                  pcVar13 == (char *)0x0)) || (*pcVar13 == '\0'))));
        *(uint *)(lVar5 + 0x14) = uVar11;
joined_r0x0084c680:
        if (iVar8 + 1U == (uVar7 ^ 0xffff)) goto LAB_0084c684;
        iVar8 = iVar8 + 1;
      } while (sVar10 == 0);
LAB_0084c5cc:
      uVar11 = *(uint *)(lVar5 + 0x14);
      uVar3 = *(ushort *)(lVar5 + 0x10);
      uVar12 = (uint)uVar3;
      uVar1 = 0;
      if (uVar3 <= uVar11) {
        uVar1 = (uint)uVar3;
      }
      pcVar13 = (char *)(*(long *)(lVar5 + 8) + (ulong)(uVar11 - uVar1) * 0x5b8);
      if ((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) goto LAB_0084c684;
      goto LAB_0084c600;
    }
  }
  return;
}


