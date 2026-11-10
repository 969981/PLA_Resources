/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022ff14; name: FUN_0022ff14
 */


void FUN_0022ff14(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar1 = PTR_DAT_04372850;
  uVar7 = (ulong)*(uint *)(lVar2 + 0x1c);
  if (0 < (int)*(uint *)(lVar2 + 0x1c)) {
    lVar2 = 0;
    if ((param_3 & 1) == 0) {
      lVar6 = 0;
      do {
        uVar3 = FUN_0087e43c(*(long *)(param_1 + 0x10) + lVar6);
        FUN_0087e7b8(*(long *)(param_1 + 0x10) + lVar6,param_2);
        FUN_00232674(uVar3);
        lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar4 = *(long *)(lVar4 + 0x20);
        uVar5 = FUN_00250f90(*(undefined8 *)
                              (lVar4 + *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8) +
                              lVar2));
        if ((uVar5 & 1) != 0) {
          FUN_0087d828(*(undefined8 *)
                        (*(long *)(lVar4 + *(long *)(puVar1 + ((ulong)*(uint *)(param_1 + 8) & 7) *
                                                              8) + lVar2) + 0x68),param_2);
        }
        lVar6 = lVar6 + 0x20;
        lVar2 = lVar2 + 0x40;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else {
      do {
        uVar3 = FUN_0087e43c(*(long *)(param_1 + 0x10) + lVar2);
        FUN_0087e7b8(*(long *)(param_1 + 0x10) + lVar2,param_2);
        FUN_00232674(uVar3);
        lVar2 = lVar2 + 0x20;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  if ((param_3 & 1) == 0) {
    uVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    uVar7 = FUN_00250f60();
    if ((uVar7 & 1) != 0) {
      FUN_0087cb1c(uVar3,param_2);
    }
    uVar7 = nn::util::BinaryFileHeader::IsRelocated();
    if ((uVar7 & 1) != 0) {
      nn::util::BinaryFileHeader::GetRelocationTable();
      nn::util::RelocationTable::Unrelocate();
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (lVar6 != 0) {
    uVar7 = (ulong)*(uint *)(lVar2 + 0x1c);
    if (0 < (int)*(uint *)(lVar2 + 0x1c)) {
      lVar2 = lVar6;
      do {
        FUN_0087e42c(lVar2);
        uVar7 = uVar7 - 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar7 != 0);
    }
    FUN_00232674(lVar6);
  }
  FUN_00232674(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00232674();
  }
  FUN_00232674(*(undefined8 *)(param_1 + 0x28));
  FUN_00232674(*(undefined8 *)(param_1 + 0x30));
  return;
}


