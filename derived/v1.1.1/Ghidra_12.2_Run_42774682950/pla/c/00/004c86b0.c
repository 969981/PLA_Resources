/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c86b0; name: FUN_004c86b0
 */


undefined8 FUN_004c86b0(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  ushort *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar4 = FUN_004f5d10(*(undefined8 *)(*(long *)(param_1 + 0x17a8) + 0x30));
  if (lVar4 != 0) {
    psVar5 = *(short **)(param_1 + 0x17a8);
    if (psVar5[0x14] != *psVar5) {
      return 1;
    }
    if (*(long *)(param_1 + 0x838) != 0) {
      return 1;
    }
    lVar4 = FUN_004f5d10(*(undefined8 *)(psVar5 + 0x18));
    if (lVar4 != 0) {
      lVar4 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0x17a8) + 0x30));
      do {
        if (lVar4 != 0) {
          plVar7 = *(long **)(lVar4 + 8);
          FUN_004c9560((long *)(param_1 + 0x818));
          lVar8 = *plVar7;
          *(long *)(param_1 + 0x1748) = plVar7[1];
          *(long *)(param_1 + 0x1740) = lVar8;
          lVar9 = plVar7[3];
          lVar8 = plVar7[2];
          lVar11 = plVar7[5];
          lVar10 = plVar7[4];
          *(long *)(param_1 + 0x838) = plVar7[6];
          *(long *)(param_1 + 0x820) = lVar9;
          *(long *)(param_1 + 0x818) = lVar8;
          *(long *)(param_1 + 0x830) = lVar11;
          *(long *)(param_1 + 0x828) = lVar10;
          lVar9 = plVar7[0xc];
          lVar8 = plVar7[0xb];
          lVar10 = plVar7[0xd];
          lVar12 = plVar7[0x10];
          lVar11 = plVar7[0xf];
          lVar14 = plVar7[10];
          lVar13 = plVar7[9];
          *(long *)(param_1 + 0xd78) = plVar7[0xe];
          *(long *)(param_1 + 0xd70) = lVar10;
          *(long *)(param_1 + 0xd88) = lVar12;
          *(long *)(param_1 + 0xd80) = lVar11;
          *(long *)(param_1 + 0xd58) = lVar14;
          *(long *)(param_1 + 0xd50) = lVar13;
          *(long *)(param_1 + 0xd68) = lVar9;
          *(long *)(param_1 + 0xd60) = lVar8;
          lVar8 = plVar7[7];
          *(long *)(param_1 + 0xd48) = plVar7[8];
          *(long *)(param_1 + 0xd40) = lVar8;
          uVar1 = *(undefined4 *)(*plVar7 + 5);
          *(undefined2 *)(param_1 + 0x1796) = *(undefined2 *)(*plVar7 + 9);
          *(undefined4 *)(param_1 + 0x1792) = uVar1;
          FUN_00400420(*(undefined8 *)(lVar4 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0xce)
          ;
          FUN_004f5be0(lVar4);
        }
        puVar6 = *(ushort **)(param_1 + 0x17a8);
        uVar2 = *puVar6;
        if (*(ulong *)(param_1 + 0xd80) == (ulong)uVar2) {
          puVar6 = puVar6 + 4;
          iVar3 = FUN_004d0a10(param_1,puVar6);
          if (iVar3 == 0) goto LAB_004c8860;
LAB_004c8810:
          iVar3 = FUN_004d0310(param_1,puVar6);
          if (iVar3 == 0) goto LAB_004c8860;
          iVar3 = FUN_004c8430(param_1,*(long *)(param_1 + 0x17a8) + 0x38,param_1 + 0xd88);
          if (iVar3 < 0) {
            return 0;
          }
          lVar4 = FUN_004f5d10(*(undefined8 *)(*(long *)(param_1 + 0x17a8) + 0x30));
        }
        else {
          if (((*(ulong *)(param_1 + 0xd80) != (ulong)uVar2 + 1) || (puVar6[0x14] == uVar2)) ||
             (1 < *(int *)(param_1 + 0xd44) - 0x15U)) {
            FUN_004c99a0(param_1,0x50,0x1a8,0x44,"external/openssl/ssl/record/rec_layer_d1.c",0x108)
            ;
            return 0;
          }
          puVar6 = puVar6 + 0xc;
          iVar3 = FUN_004d0a10(param_1,puVar6);
          if (iVar3 != 0) goto LAB_004c8810;
LAB_004c8860:
          iVar3 = FUN_004c9a20(param_1);
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          *(undefined8 *)(param_1 + 0xd48) = 0;
          *(undefined8 *)(param_1 + 0x1748) = 0;
          lVar4 = FUN_004f5d10(*(undefined8 *)(*(long *)(param_1 + 0x17a8) + 0x30));
        }
        if (lVar4 == 0) break;
        lVar4 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0x17a8) + 0x30));
      } while( true );
    }
  }
  psVar5 = *(short **)(param_1 + 0x17a8);
  psVar5[0x1c] = *psVar5;
  psVar5[0x14] = *psVar5 + 1;
  return 1;
}


