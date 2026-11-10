/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032d2b0; name: FUN_0032d2b0
 */


void FUN_0032d2b0(int *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (((DAT_04399a60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04399a60), iVar3 != 0)) {
    FUN_00100250(PTR__mutex_04373b00,&DAT_041538d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_04399a60);
  }
                    /* try { // try from 0032d2d4 to 0032d2d7 has its CatchHandler @ 0032d458 */
  lVar4 = std::__libcpp_thread_get_current_id();
  bVar2 = DAT_04399a68 == 0 && lVar4 == 0;
  if (DAT_04399a68 != 0 && lVar4 != 0) {
    bVar2 = DAT_04399a68 == lVar4;
  }
  if (bVar2) {
    if (*param_1 != 1) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_util.cc"
                   ,0x32c);
                    /* try { // try from 0032d330 to 0032d343 has its CatchHandler @ 0032d444 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: (scc->visit_status.load(nn::npln::gnp::std::memory_order_relaxed)) == (SCCInfoBase::kRunning): "
                          );
                    /* try { // try from 0032d344 to 0032d34b has its CatchHandler @ 0032d440 */
      FUN_0030f41c(auStack_28,uVar5);
      FUN_0030f658(auStack_60);
    }
    return;
  }
  if (((DAT_04399a58 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_04399a58), puVar1 = PTR_DAT_043730c0, iVar3 != 0)) {
    *(undefined8 *)(PTR_DAT_043730c0 + 0x10) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
                    /* try { // try from 0032d40c to 0032d417 has its CatchHandler @ 0032d428 */
    FUN_0031f0c0(PTR_LAB_04373af8);
    __cxa_guard_release(&DAT_04399a58);
  }
  std::mutex::lock();
  DAT_04399a68 = lVar4;
  FUN_0032d460(param_1);
  DAT_04399a68 = 0;
  std::mutex::unlock();
  return;
}


