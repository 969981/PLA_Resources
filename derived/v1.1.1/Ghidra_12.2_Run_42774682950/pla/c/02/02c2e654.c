/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2e654; name: FUN_02c2e654
 */


void FUN_02c2e654(long param_1,ushort *param_2,int param_3,int param_4,long param_5)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  
  if (*(char *)(param_5 + 0x7c) != '\0') {
    **(undefined2 **)(param_5 + 0x58) = 0;
    *(undefined2 *)(param_5 + 0x7a) = 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x90) + 8) == 0) {
    if (param_3 != 0) {
      uVar5 = param_4 * 0x2983 + 0x7c89;
      cVar2 = *(char *)(param_5 + 0x7c);
      do {
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = *param_2;
        uVar4 = *(ushort *)(param_5 + 0x7a);
        uVar6 = (ulong)uVar4;
        uVar1 = uVar4 + 1;
        if (uVar1 < *(ushort *)(param_5 + 0x78)) {
          *(short *)(param_5 + 0x7a) = (short)uVar1;
          *(short *)(*(long *)(param_5 + 0x58) + uVar6 * 2) = (short)(uVar3 ^ uVar5);
          uVar6 = (ulong)*(ushort *)(param_5 + 0x7a);
        }
        else {
          if ((((uVar3 ^ uVar5) & 0xffff) != 0) || (uVar1 != *(ushort *)(param_5 + 0x78)))
          goto LAB_02c2e7b4;
          *(ushort *)(param_5 + 0x7a) = uVar4 + 1;
        }
        uVar5 = uVar5 << 3 | uVar5 >> 0xd & 7;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        *(undefined2 *)(*(long *)(param_5 + 0x58) + uVar6 * 2) = 0;
        if (param_3 == 0) break;
        cVar2 = *(char *)(param_5 + 0x7c);
      } while( true );
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (*(char *)(param_5 + 0x7c) == '\0') {
        return;
      }
      uVar3 = *(ushort *)(param_5 + 0x7a);
      uVar6 = (ulong)uVar3;
      uVar5 = uVar3 + 1;
      uVar4 = *param_2;
      if (uVar5 < *(ushort *)(param_5 + 0x78)) {
        *(short *)(param_5 + 0x7a) = (short)uVar5;
        *(ushort *)(*(long *)(param_5 + 0x58) + uVar6 * 2) = uVar4;
        uVar6 = (ulong)*(ushort *)(param_5 + 0x7a);
      }
      else {
        if ((uVar4 != 0) || (uVar5 != *(ushort *)(param_5 + 0x78))) {
LAB_02c2e7b4:
          **(undefined2 **)(param_5 + 0x58) = 0;
          *(undefined2 *)(param_5 + 0x7a) = 0;
          return;
        }
        *(ushort *)(param_5 + 0x7a) = uVar3 + 1;
      }
      param_2 = param_2 + 1;
      *(undefined2 *)(*(long *)(param_5 + 0x58) + uVar6 * 2) = 0;
    }
  }
  if (*(char *)(param_5 + 0x7c) != '\0') {
    psVar7 = *(short **)(param_5 + 0x58);
    uVar5 = 0;
    do {
      if (*psVar7 == 0x10) {
        lVar8 = (ulong)(ushort)psVar7[1] + 2;
        psVar7 = psVar7 + lVar8;
      }
      else {
        if (*psVar7 == 0) break;
        psVar7 = psVar7 + 1;
        lVar8 = 1;
      }
      uVar5 = (int)lVar8 + uVar5;
    } while (uVar5 < 0x800);
    *(short *)(param_5 + 0x7a) = (short)uVar5;
  }
  return;
}


