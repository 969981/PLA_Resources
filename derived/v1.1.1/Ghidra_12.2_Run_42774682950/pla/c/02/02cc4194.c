/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc4194; name: FUN_02cc4194
 */


undefined8 FUN_02cc4194(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  Context *this;
  undefined8 uVar7;
  char local_58 [24];
  undefined4 local_38 [2];
  
  param_1 = (undefined8 *)*param_1;
  iVar4 = FUN_001dbafc(*param_1);
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    FUN_001dbcbc(*param_1,0x200002,param_1 + 0x17);
  }
  else {
    local_38[0] = 0;
    if (param_1[0x12] != 0) {
      if (iVar4 == 0x23) {
        uVar5 = *param_1;
        uVar1 = 0x200039;
      }
      else {
        if (iVar4 != 0x3c) goto LAB_02cc423c;
        uVar5 = *param_1;
        uVar1 = 0x20000d;
      }
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      iVar4 = FUN_001dbcbc(uVar5,uVar1,local_58);
      if (iVar4 == 0) {
        nn::ssl::GetSslResultFromValue((Result *)local_38,local_58,8);
      }
    }
LAB_02cc423c:
    *(undefined4 *)(param_1 + 0x16) = local_38[0];
  }
  FUN_001dbcb0(*param_1);
  *param_1 = 0;
  if (param_1[0x12] == 0) {
    return 1;
  }
  nn::ssl::Context::Destroy();
  this = (Context *)param_1[0x12];
  param_1[0x12] = 0;
  if (this == (Context *)0x0) {
    return 1;
  }
  FUN_02bcbe58(local_58,0);
  nn::ssl::Context::~Context(this);
  plVar2 = (long *)param_1[0x13];
  uVar5 = param_1[0x14];
  uVar7 = param_1[0x15];
  uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar3 = tpidr_el0;
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar2,this,uVar5,uVar7);
      goto LAB_02cc42f8;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,this,uVar5,uVar7);
LAB_02cc42f8:
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
  return 1;
}


