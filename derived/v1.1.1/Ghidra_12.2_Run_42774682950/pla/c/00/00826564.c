/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00826564; name: FUN_00826564
 */


void FUN_00826564(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  uVar1 = param_3 * 0x378;
  uVar6 = (ulong)param_3;
  uVar2 = FUN_007e336c();
  puVar3 = (undefined8 *)FUN_0081a750((ulong)uVar1,uVar2);
  if ((uVar1 == 0) || (puVar3 == (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 0xe8) = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      local_58[0] = 0x10401;
      goto LAB_00826768;
    }
  }
  else {
    uVar5 = 0;
    do {
      *(undefined4 *)((long)puVar3 + uVar5) = 0;
      uVar5 = uVar5 + 4;
    } while (uVar1 != uVar5);
    *(undefined8 **)(param_2 + 0xe8) = puVar3;
  }
  if (param_3 != 0) {
    *(undefined8 **)(param_2 + 0xd8) = puVar3;
    lVar9 = param_2 + 0xc0;
    *(uint *)(param_2 + 0xe0) = param_3;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_007e8fa0(lVar9,lVar9,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
    if (param_3 != 1) {
      lVar7 = uVar6 - 1;
      lVar4 = 0x378;
      do {
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0xd8) + lVar4);
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_007e8fa0(lVar9,lVar9,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
        lVar4 = lVar4 + 0x378;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  puVar3 = (undefined8 *)(param_2 + 0xa8);
  if (*(undefined8 **)(param_2 + 0xb0) != puVar3) {
    puVar10 = *(undefined8 **)(param_2 + 0xb0);
    do {
      puVar8 = (undefined8 *)puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      FUN_007e8fc4(param_2 + 0xc0,param_2 + 0xc0,(long)*(int *)(param_2 + 0xd4) + (long)puVar10);
      puVar10 = puVar8;
    } while (puVar8 != puVar3);
  }
  FUN_007e8f94(puVar3);
  if (param_3 != 0) {
    if (*(int *)(param_2 + 0xd0) != 0) goto LAB_008266ac;
    do {
      lVar9 = 0;
      while( true ) {
        FUN_00825bbc(local_58,lVar9);
        uVar1 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar1;
        if (uVar1 == 0) goto LAB_008266e8;
        if (*(int *)(param_2 + 0xd0) == 0) break;
LAB_008266ac:
        lVar4 = FUN_007e9088(param_2 + 0xc0);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_2 + 0xd4);
        }
        lVar9 = lVar4 + 0x10;
        FUN_00825a20(lVar9);
        FUN_007e8fa0(puVar3,puVar3,lVar4);
      }
    } while( true );
  }
LAB_008266e8:
  puVar10 = *(undefined8 **)(param_2 + 0xb0);
  if (puVar10 != puVar3) {
    lVar9 = FUN_007e9088(param_2 + 0x70);
    if (lVar9 == 0) goto LAB_00826744;
    do {
      lVar9 = lVar9 - *(int *)(param_2 + 0x84);
      while( true ) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        FUN_007e8fa0(param_2 + 0x58,param_2 + 0x58,lVar9);
        *(undefined8 **)(lVar9 + 0x10) = puVar10 + 2;
        puVar10 = (undefined8 *)puVar10[1];
        if (puVar10 == puVar3) goto LAB_0082674c;
        lVar9 = FUN_007e9088(param_2 + 0x70);
        if (lVar9 != 0) break;
LAB_00826744:
        lVar9 = 0;
      }
    } while( true );
  }
LAB_0082674c:
  local_58[0] = 0;
LAB_00826768:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_58);
  return;
}


