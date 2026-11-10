/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef3434; name: FUN_01ef3434
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ef3434(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,byte param_4,
                 undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_170 [2];
  undefined4 local_160 [4];
  undefined1 *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char local_120 [136];
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  undefined1 local_78;
  undefined4 local_74;
  byte local_70;
  undefined8 local_6c;
  undefined1 local_64;
  undefined4 local_60;
  ushort local_5c;
  undefined8 local_48;
  
  local_160[0] = 0;
  local_138 = 0;
  local_150 = &DAT_cbf29ce484222645;
  local_140 = 0;
  local_120[0] = '\0';
  local_120[1] = '\0';
  local_120[2] = '\0';
  local_120[3] = '\0';
  local_120[4] = '\0';
  local_120[5] = '\0';
  local_120[6] = '\0';
  local_120[7] = '\0';
  local_120[8] = '\0';
  local_120[9] = '\0';
  local_120[10] = '\0';
  local_120[0xb] = '\0';
  local_120[0xc] = '\0';
  local_120[0xd] = '\0';
  local_120[0xe] = '\0';
  local_120[0xf] = '\0';
  uStack_128 = _UNK_0388a138;
  local_130 = _DAT_0388a130;
  local_120[0x10] = '\0';
  local_120[0x11] = '\0';
  local_120[0x12] = '\0';
  local_120[0x13] = '\0';
  local_120[0x14] = '\0';
  local_120[0x15] = '\0';
  local_120[0x16] = '\0';
  local_120[0x17] = '\0';
  local_120[0x18] = '\0';
  local_120[0x19] = '\0';
  local_120[0x1a] = '\0';
  local_120[0x1b] = '\0';
  local_120[0x1c] = '\0';
  local_120[0x1d] = '\0';
  local_120[0x1e] = '\0';
  local_120[0x1f] = '\0';
  local_120[0x80] = 0;
  local_120[0x20] = '\0';
  local_120[0x21] = '\0';
  local_120[0x22] = '\0';
  local_120[0x23] = '\0';
  local_120[0x24] = '\0';
  local_120[0x25] = '\0';
  local_120[0x26] = '\0';
  local_120[0x27] = '\0';
  local_120[0x28] = '\0';
  local_120[0x29] = '\0';
  local_120[0x2a] = '\0';
  local_120[0x2b] = '\0';
  local_120[0x2c] = '\0';
  local_120[0x2d] = '\0';
  local_120[0x2e] = '\0';
  local_120[0x2f] = '\0';
  local_120[0x30] = '\0';
  local_120[0x31] = '\0';
  local_120[0x32] = '\0';
  local_120[0x33] = '\0';
  local_120[0x34] = '\0';
  local_120[0x35] = '\0';
  local_120[0x36] = '\0';
  local_120[0x37] = '\0';
  local_120[0x38] = '\0';
  local_120[0x39] = '\0';
  local_120[0x3a] = '\0';
  local_120[0x3b] = '\0';
  local_120[0x3c] = '\0';
  local_120[0x3d] = '\0';
  local_120[0x3e] = '\0';
  local_120[0x3f] = '\0';
  local_120[0x40] = '\0';
  local_120[0x41] = '\0';
  local_120[0x42] = '\0';
  local_120[0x43] = '\0';
  local_120[0x44] = '\0';
  local_120[0x45] = '\0';
  local_120[0x46] = '\0';
  local_120[0x47] = '\0';
  local_120[0x48] = '\0';
  local_120[0x49] = '\0';
  local_120[0x4a] = '\0';
  local_120[0x4b] = '\0';
  local_120[0x4c] = '\0';
  local_120[0x4d] = '\0';
  local_120[0x4e] = '\0';
  local_120[0x4f] = '\0';
  local_120[0x50] = '\0';
  local_120[0x51] = '\0';
  local_120[0x52] = '\0';
  local_120[0x53] = '\0';
  local_120[0x54] = '\0';
  local_120[0x55] = '\0';
  local_120[0x56] = '\0';
  local_120[0x57] = '\0';
  local_120[0x58] = '\0';
  local_120[0x59] = '\0';
  local_120[0x5a] = '\0';
  local_120[0x5b] = '\0';
  local_120[0x5c] = '\0';
  local_120[0x5d] = '\0';
  local_120[0x5e] = '\0';
  local_120[0x5f] = '\0';
  local_120[0x60] = '\0';
  local_120[0x61] = '\0';
  local_120[0x62] = '\0';
  local_120[99] = '\0';
  local_120[100] = '\0';
  local_120[0x65] = '\0';
  local_120[0x66] = '\0';
  local_120[0x67] = '\0';
  local_120[0x68] = '\0';
  local_120[0x69] = '\0';
  local_120[0x6a] = '\0';
  local_120[0x6b] = '\0';
  local_120[0x6c] = '\0';
  local_120[0x6d] = '\0';
  local_120[0x6e] = '\0';
  local_120[0x6f] = '\0';
  local_120[0x70] = '\0';
  local_120[0x71] = '\0';
  local_120[0x72] = '\0';
  local_120[0x73] = '\0';
  local_120[0x74] = '\0';
  local_120[0x75] = '\0';
  local_120[0x76] = '\0';
  local_120[0x77] = '\0';
  local_120[0x78] = '\0';
  local_120[0x79] = '\0';
  local_120[0x7a] = '\0';
  local_120[0x7b] = '\0';
  local_120[0x7c] = '\0';
  local_120[0x7d] = '\0';
  local_120[0x7e] = '\0';
  local_120[0x7f] = '\0';
  local_120[0x81] = '\x01';
  local_120[0x82] = '\x01';
  local_120[0x83] = '\0';
  local_120[0x84] = '\0';
  local_78 = 0;
  local_70 = 0;
  local_98 = &DAT_cbf29ce484222645;
  puStack_90 = &DAT_03996322;
  local_74 = 0x43340000;
  local_88 = 0;
  local_80 = (long *)0x0;
  local_6c = 0x1000000000000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 1;
  strncpy(local_120,(char *)param_1[1],0x80);
  local_150 = (undefined1 *)*param_1;
  local_138 = param_2[1];
  local_140 = *param_2;
  uStack_128 = param_3[1];
  local_130 = *param_3;
  local_5c = local_5c & 0xff00;
  local_70 = param_4 & 1;
  local_60 = param_5;
  FUN_01ef3618(param_1,local_160);
  FUN_01ef2358(local_170,local_160);
  if (local_170[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_170[0] + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_170[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_48 = *local_170[0];
      FUN_02a44274(lVar5 + 0xd8,&local_48);
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


