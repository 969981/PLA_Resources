/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033195e8; name: FUN_033195e8
 */


int FUN_033195e8(long *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [56];
  char *local_90;
  undefined8 uStack_88;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 auStack_68 [8];
  int local_28 [2];
  
  lVar3 = FUN_032e21f4(param_2);
  if (lVar3 != 0) {
    local_78 = auStack_68;
    local_70 = -0x7ffffff7ffffffff;
    auStack_68[0] = param_2;
    local_28[0] = FUN_0331ae40(param_1,&local_78);
    if (local_28[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        bVar1 = true;
      }
      else {
        bVar1 = true;
        FUN_03326994(auStack_c8,*(long *)(*param_1 + 0x28),1);
        local_90 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        uStack_88 = 0xd1;
        uVar4 = FUN_03326338(auStack_c8,"HK_RETURN_IF_FAILED({}) returning {}. ",PTR_DAT_04389060,
                             "checkSingleParams(templateStack)",local_28);
        FUN_03326338(uVar4,&DAT_03996322,PTR_DAT_04372528);
        FUN_033269dc(auStack_c8);
      }
    }
    else {
      bVar1 = false;
    }
    lVar3 = local_70;
    uVar2 = local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_78 != (undefined8 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a090,local_78,8,uVar2 & 0x3fffffff);
    }
    if (bVar1) {
      return local_28[0];
    }
  }
  return 0;
}


