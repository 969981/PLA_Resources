/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003122fc; name: FUN_003122fc
 */


byte * FUN_003122fc(long *param_1,byte *param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x1;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [8];
  long *local_70;
  long lStack_68;
  long local_60;
  byte *local_38;
  
  local_38 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_1 + 0x98))(param_1);
  if (lVar4 == 0) {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x30e);
                    /* try { // try from 0031236c to 0031237f has its CatchHandler @ 00312518 */
    uVar5 = FUN_0030f3ac(&local_70,"CHECK failed: descriptor: ");
                    /* try { // try from 00312380 to 00312387 has its CatchHandler @ 00312514 */
    FUN_0030f41c(auStack_78,uVar5);
    FUN_0030f658(&local_70);
  }
  if (extraout_x1 == 0) {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x30f);
                    /* try { // try from 003123ac to 003123bf has its CatchHandler @ 00312510 */
    uVar5 = FUN_0030f3ac(&local_70,"CHECK failed: reflection: ");
                    /* try { // try from 003123c0 to 003123c7 has its CatchHandler @ 0031250c */
    FUN_0030f41c(auStack_78,uVar5);
    FUN_0030f658(&local_70);
    cVar1 = *(char *)(*(long *)(lVar4 + 0x20) + 0x48);
  }
  else {
    cVar1 = *(char *)(*(long *)(lVar4 + 0x20) + 0x48);
  }
  if (cVar1 == '\0') {
    do {
      uVar7 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
      if ((uVar7 & 1) != 0) {
        return local_38;
      }
      bVar3 = *local_38;
      uVar7 = (ulong)(uint)bVar3;
      pbVar6 = local_38 + 1;
      if ((char)bVar3 < '\0') {
        bVar2 = local_38[1];
        uVar7 = (ulong)(((uint)bVar3 + (uint)bVar2 * 0x80) - 0x80);
        if (-1 < (char)bVar2) {
          pbVar6 = local_38 + 2;
          goto LAB_00312470;
        }
        auVar10 = FUN_00323230(local_38,uVar7);
        local_38 = auVar10._0_8_;
        if (local_38 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (auVar10._8_4_ == 0) {
          uVar9 = 0;
          goto LAB_00312500;
        }
      }
      else {
LAB_00312470:
        local_38 = pbVar6;
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = local_38;
        uVar9 = 0;
        if ((int)uVar7 == 0) goto LAB_00312500;
      }
      local_38 = auVar10._0_8_;
      uVar9 = auVar10._8_4_;
      if ((uVar9 & 7) == 4) {
LAB_00312500:
        *(uint *)(param_3 + 0x50) = uVar9 - 1;
        return local_38;
      }
      uVar9 = uVar9 >> 3;
      lVar8 = FUN_00342e08(lVar4,uVar9);
      if (lVar8 == 0) {
        lVar8 = FUN_00343aac(lVar4,uVar9);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          lVar8 = FUN_0038e3e8(extraout_x1,uVar9);
        }
        else {
          lVar8 = FUN_003425d4(*(long *)(param_3 + 0x60),lVar4,uVar9);
        }
      }
      local_38 = (byte *)FUN_003126b4(param_1,local_38,param_3,auVar10._8_8_ & 0xffffffff,
                                      extraout_x1,lVar8);
      pbVar6 = (byte *)0x0;
    } while (local_38 != (byte *)0x0);
  }
  else {
    local_70 = param_1;
    lStack_68 = lVar4;
    local_60 = extraout_x1;
    pbVar6 = (byte *)FUN_0031252c(&local_70,local_38,param_3);
  }
  return pbVar6;
}


