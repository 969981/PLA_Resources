/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082da5c; name: FUN_0082da5c
 */


void FUN_0082da5c(int *param_1,ushort *param_2,ushort param_3,undefined1 param_4,byte param_5,
                 byte param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = param_4;
  *(byte *)((long)param_2 + 3) = param_5;
  *(byte *)(param_2 + 3) = param_6 & 1;
  uVar1 = FUN_007e336c();
  uVar7 = (ulong)param_3;
  lVar2 = FUN_0081a750(uVar7 << 5,uVar1);
  if ((lVar2 != 0) && (param_3 != 0)) {
    puVar3 = (undefined8 *)(lVar2 + 0x10);
    do {
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      uVar7 = uVar7 - 1;
      *puVar3 = 0;
      *(undefined1 *)((long)puVar3 + 0xc) = 0xff;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3 = puVar3 + 4;
    } while (uVar7 != 0);
  }
  *(long *)(param_2 + 4) = lVar2;
  uVar1 = FUN_007e336c();
  uVar7 = (ulong)param_5;
  puVar3 = (undefined8 *)FUN_0081a750((uVar7 + (ulong)param_5 * 2) * 8,uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    if (param_5 == 0) {
      *(undefined8 **)(param_2 + 8) = puVar3;
      goto LAB_0082db68;
    }
    puVar8 = puVar3;
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      FUN_007e8f94(puVar8);
      *(undefined4 *)((long)puVar8 + 0x14) = 0xffffffff;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 3;
    } while (uVar7 != 0);
  }
  *(undefined8 **)(param_2 + 8) = puVar3;
  if (param_5 != 0) {
    uVar4 = 0;
    do {
      uVar7 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)((long)puVar3 + uVar7 * 0x18 + 0x14) = 0;
    } while (uVar4 < param_5);
  }
LAB_0082db68:
  uVar7 = (ulong)((uint)param_3 * 0x70);
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a7a0(uVar7,uVar1,8);
  if ((param_3 != 0) && (lVar2 != 0)) {
    lVar5 = lVar2 + 3;
    uVar6 = uVar7;
    do {
      *(undefined4 *)(lVar5 + -3) = 0;
      lVar5 = lVar5 + 4;
      uVar6 = uVar6 - 4;
    } while (uVar6 != 0);
  }
  *(long *)(param_2 + 0x34) = lVar2;
  FUN_008312a0(param_1,param_2 + 0xc,lVar2,uVar7,(ulong)param_3 << 1,(uint)param_3,0);
  if (*param_1 == 0) {
    local_68[0] = 0;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_58);
    FUN_007ee578(param_1,local_68);
  }
  return;
}


