/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083db20; name: FUN_0083db20
 */


void FUN_0083db20(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  puVar3 = *(undefined8 **)(param_2 + 0xa0);
  uVar2 = *(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) - 1 & 0xffff;
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = (ulong)(uVar2 * 0x38);
    uVar4 = FUN_007e336c();
    puVar3 = (undefined8 *)FUN_0081a750(uVar7,uVar4);
    if (uVar2 != 0 && puVar3 != (undefined8 *)0x0) {
      lVar6 = (long)puVar3 + 3;
      do {
        *(undefined4 *)(lVar6 + -3) = 0;
        lVar6 = lVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
    }
    *(undefined8 **)(param_2 + 0xa0) = puVar3;
    if (uVar2 == 0 || puVar3 == (undefined8 *)0x0) goto LAB_0083dc20;
  }
  else if (uVar2 == 0 || puVar3 == (undefined8 *)0x0) goto LAB_0083dc20;
  *(undefined8 **)(param_2 + 0x90) = puVar3;
  lVar6 = param_2 + 0x78;
  *(uint *)(param_2 + 0x98) = uVar2;
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_007e8fa0(lVar6,lVar6,(long)*(int *)(param_2 + 0x8c) + (long)puVar3);
  if (uVar2 != 1) {
    lVar10 = 0;
    lVar8 = (ulong)uVar2 - 1;
    do {
      lVar1 = *(long *)(param_2 + 0x90) + lVar10;
      puVar3 = (undefined8 *)(lVar1 + 0x38);
      *puVar3 = 0;
      *(undefined8 *)(lVar1 + 0x40) = 0;
      FUN_007e8fa0(lVar6,lVar6,(long)*(int *)(param_2 + 0x8c) + (long)puVar3);
      lVar10 = lVar10 + 0x38;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_0083dc20:
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (*(undefined8 **)(param_2 + 0x68) != puVar3) {
    puVar5 = *(undefined8 **)(param_2 + 0x68);
    do {
      puVar9 = (undefined8 *)puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_007e8fc4(param_2 + 0x78,param_2 + 0x78,(long)*(int *)(param_2 + 0x8c) + (long)puVar5);
      puVar5 = puVar9;
    } while (puVar9 != puVar3);
  }
  FUN_007e8f94(puVar3);
  puVar3 = *(undefined8 **)(param_2 + 0xe8);
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = (ulong)(uVar2 << 5);
    uVar4 = FUN_007e336c();
    puVar3 = (undefined8 *)FUN_0081a750(uVar7,uVar4);
    if ((uVar2 != 0) && (puVar3 != (undefined8 *)0x0)) {
      lVar6 = (long)puVar3 + 3;
      do {
        *(undefined4 *)(lVar6 + -3) = 0;
        lVar6 = lVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
    }
    *(undefined8 **)(param_2 + 0xe8) = puVar3;
  }
  puVar5 = (undefined8 *)(param_2 + 0xa8);
  if ((uVar2 != 0) && (puVar3 != (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 0xd8) = puVar3;
    lVar6 = param_2 + 0xc0;
    *(uint *)(param_2 + 0xe0) = uVar2;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_007e8fa0(lVar6,lVar6,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
    if (uVar2 != 1) {
      lVar10 = 0;
      lVar8 = (ulong)uVar2 - 1;
      do {
        lVar1 = *(long *)(param_2 + 0xd8) + lVar10;
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *puVar3 = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        FUN_007e8fa0(lVar6,lVar6,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
        lVar10 = lVar10 + 0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  if (*(undefined8 **)(param_2 + 0xb0) != puVar5) {
    puVar3 = *(undefined8 **)(param_2 + 0xb0);
    do {
      puVar9 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_007e8fc4(param_2 + 0xc0,param_2 + 0xc0,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
      puVar3 = puVar9;
    } while (puVar9 != puVar5);
  }
  FUN_007e8f94(puVar5);
  local_58[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_58);
  return;
}


