/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853d34; name: FUN_00853d34
 */


void FUN_00853d34(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  uVar4 = FUN_00840df0();
  if ((uVar4 & 1) == 0) {
    local_58[0] = 0x1040c;
LAB_00853da0:
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  }
  else {
    uVar4 = FUN_00840e00();
    puVar2 = PTR_DAT_043773c0;
    if ((uVar4 & 1) == 0) {
      local_58[0] = 0x10408;
      goto LAB_00853da0;
    }
    if (*(long *)PTR_DAT_043773c0 != 0) {
      local_58[0] = 0x1040f;
      goto LAB_00853da0;
    }
    if (*(int *)(param_2 + 0x18) < 0) {
      local_58[0] = 0x10407;
      goto LAB_00853da0;
    }
    uVar5 = FUN_007e336c();
    puVar6 = (undefined8 *)FUN_0081a7a0(0xd8,uVar5,8);
    if (puVar6 == (undefined8 *)0x0) {
      local_58[0] = 0x10401;
      *(undefined8 *)PTR_DAT_04378088 = 0;
      goto LAB_00853da0;
    }
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)((long)puVar6 + lVar8);
      lVar8 = lVar8 + 6;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      puVar3 = PTR_DAT_04378088;
    } while (lVar8 != 0xd8);
    *(undefined8 **)PTR_DAT_04378088 = puVar6;
    *puVar6 = 0;
    FUN_007ecf14(puVar6);
    puVar6[1] = 0;
    FUN_00847570(puVar6 + 2);
    puVar6[8] = 0;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    puVar6[0x14] = 0;
    *(undefined2 *)(puVar6 + 0x15) = 0;
    *(undefined8 *)((long)puVar6 + 0xac) = 0;
    *(undefined8 *)((long)puVar6 + 0xb4) = 0;
    *(undefined4 *)((long)puVar6 + 0xbc) = 0;
    *(undefined1 *)(puVar6 + 0x18) = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    FUN_007ee578((long)puVar6 + 0xc4,local_58);
    *(undefined8 **)puVar2 = puVar6;
    FUN_00853f30(local_58,puVar6,param_2);
    if (local_58[0] == 0) {
      local_68[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
      piVar7 = local_68;
      goto LAB_00853db8;
    }
    FUN_008475a8(*(long *)puVar2 + 0x10);
    lVar8 = *(long *)puVar3;
    *(undefined8 *)puVar2 = 0;
    if (lVar8 != 0) {
      FUN_0081a840(lVar8);
      FUN_0081a800(lVar8);
    }
    *(undefined8 *)puVar3 = 0;
  }
  piVar7 = local_58;
LAB_00853db8:
  FUN_007ee578(param_1,piVar7);
  return;
}


