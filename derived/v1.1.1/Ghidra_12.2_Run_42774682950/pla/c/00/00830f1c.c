/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830f1c; name: FUN_00830f1c
 */


undefined8 FUN_00830f1c(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  local_48[0] = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = FUN_0082deb0(param_2 + 8);
  bVar1 = FUN_0082e514(uVar8,uVar4);
  if ((bVar1 == 0xff) ||
     (bVar2 = FUN_0082e514(*(undefined8 *)(param_1 + 0x10),param_3), bVar2 == 0xff)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  uVar6 = (ulong)bVar1;
  uVar3 = 1;
  if ((param_4 & 1) == 0) {
    uVar3 = 2;
  }
  uVar5 = (ulong)bVar2;
  *(undefined4 *)(*(long *)(lVar7 + uVar6 * 8) + uVar5 * 4) = uVar3;
  if (*(int *)(*(long *)(lVar7 + uVar5 * 8) + uVar6 * 4) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(*(long *)(lVar7 + uVar6 * 8) + uVar5) = 0;
  *(undefined1 *)(*(long *)(lVar7 + uVar5 * 8) + uVar6) = 0;
  return 1;
}


