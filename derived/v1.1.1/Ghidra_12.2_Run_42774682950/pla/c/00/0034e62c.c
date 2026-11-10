/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034e62c; name: FUN_0034e62c
 */


/* WARNING: Removing unreachable block (ram,0x0034e75c) */

undefined1  [16] FUN_0034e62c(long *param_1,long *param_2,byte *param_3,ulong param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte *local_58;
  
  if (((long *)*param_1 == param_2) || (*param_2 == 0)) {
    bVar1 = true;
  }
  else {
    std::mutex::lock();
    bVar1 = false;
  }
  local_58 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    local_58 = param_3 + 1;
  }
                    /* try { // try from 0034e69c to 0034e6a3 has its CatchHandler @ 0034e7c4 */
  lVar4 = FUN_00364a2c(param_2[4] + 0x130,&local_58);
  if (lVar4 == 0) {
    uVar6 = 0;
    uVar5 = 0;
    lVar4 = param_2[3];
  }
  else {
    auVar7._4_4_ = 0;
    auVar7._0_4_ = *(uint *)(lVar4 + 0x18);
    uVar6 = (ulong)*(uint *)(lVar4 + 0x1c);
    uVar5 = *(ulong *)(lVar4 + 0x20);
    auVar7._8_8_ = uVar5;
    if (*(uint *)(lVar4 + 0x18) != 0) goto joined_r0x0034e764;
    lVar4 = param_2[3];
  }
  if (lVar4 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    auVar7 = auVar2 << 0x40;
  }
  else {
                    /* try { // try from 0034e6c8 to 0034e6d7 has its CatchHandler @ 0034e7b8 */
    auVar7 = FUN_0034e62c(param_1,lVar4,param_3,1);
    uVar6 = auVar7._0_8_ >> 0x20;
    if (auVar7._0_4_ != 0) goto joined_r0x0034e764;
  }
  if ((param_4 & 1) != 0) {
                    /* try { // try from 0034e6ec to 0034e6f7 has its CatchHandler @ 0034e7c4 */
    uVar5 = FUN_0033f7f4(param_2,param_3);
    if ((uVar5 & 1) == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar7._8_8_;
      auVar7 = auVar3 << 0x40;
    }
    else {
      local_58 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        local_58 = *(byte **)(param_3 + 0x10);
      }
                    /* try { // try from 0034e71c to 0034e723 has its CatchHandler @ 0034e7ac */
      lVar4 = FUN_00364a2c(param_2[4] + 0x130,&local_58);
      if (lVar4 == 0) {
        auVar7 = ZEXT816(0);
        uVar6 = 0;
      }
      else {
        auVar7 = *(undefined1 (*) [16])(lVar4 + 0x18);
        uVar6 = *(ulong *)*(undefined1 (*) [16])(lVar4 + 0x18) >> 0x20;
      }
    }
  }
joined_r0x0034e764:
  if (!bVar1) {
    std::mutex::unlock();
  }
  auVar8._8_8_ = auVar7._8_8_;
  auVar8._0_8_ = auVar7._0_8_ & 0xffffffff | uVar6 << 0x20;
  return auVar8;
}


