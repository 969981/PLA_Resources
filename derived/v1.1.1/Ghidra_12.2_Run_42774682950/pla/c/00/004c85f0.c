/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c85f0; name: FUN_004c85f0
 */


bool FUN_004c85f0(long param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = FUN_004f5d20(*(undefined8 *)(param_2 + 8));
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    FUN_004c9560((long *)(param_1 + 0x818));
    lVar4 = *plVar3;
    *(long *)(param_1 + 0x1748) = plVar3[1];
    *(long *)(param_1 + 0x1740) = lVar4;
    lVar5 = plVar3[3];
    lVar4 = plVar3[2];
    lVar7 = plVar3[5];
    lVar6 = plVar3[4];
    *(long *)(param_1 + 0x838) = plVar3[6];
    *(long *)(param_1 + 0x830) = lVar7;
    *(long *)(param_1 + 0x828) = lVar6;
    *(long *)(param_1 + 0x820) = lVar5;
    *(long *)(param_1 + 0x818) = lVar4;
    lVar5 = plVar3[0xc];
    lVar4 = plVar3[0xb];
    lVar7 = plVar3[0xe];
    lVar6 = plVar3[0xd];
    lVar9 = plVar3[0x10];
    lVar8 = plVar3[0xf];
    lVar10 = plVar3[9];
    *(long *)(param_1 + 0xd58) = plVar3[10];
    *(long *)(param_1 + 0xd50) = lVar10;
    *(long *)(param_1 + 0xd88) = lVar9;
    *(long *)(param_1 + 0xd80) = lVar8;
    *(long *)(param_1 + 0xd78) = lVar7;
    *(long *)(param_1 + 0xd70) = lVar6;
    *(long *)(param_1 + 0xd68) = lVar5;
    *(long *)(param_1 + 0xd60) = lVar4;
    lVar4 = plVar3[7];
    *(long *)(param_1 + 0xd48) = plVar3[8];
    *(long *)(param_1 + 0xd40) = lVar4;
    uVar1 = *(undefined2 *)(*plVar3 + 9);
    *(undefined4 *)(param_1 + 0x1792) = *(undefined4 *)(*plVar3 + 5);
    *(undefined2 *)(param_1 + 0x1796) = uVar1;
    FUN_00400420(*(undefined8 *)(lVar2 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0xce);
    FUN_004f5be0(lVar2);
  }
  return lVar2 != 0;
}


