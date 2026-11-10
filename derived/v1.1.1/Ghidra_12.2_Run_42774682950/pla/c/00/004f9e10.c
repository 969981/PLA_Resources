/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9e10; name: FUN_004f9e10
 */


void FUN_004f9e10(long *param_1)

{
  uchar *puVar1;
  void *__s;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  BuiltInCertificateInfo *local_b8;
  uint uStack_b0;
  undefined4 local_ac;
  long local_a8;
  undefined8 uStack_a0;
  void *local_98;
  long lStack_90;
  long local_88;
  uchar auStack_7f [7];
  uchar *local_78;
  size_t *local_68;
  
  FUN_002f27f0(&local_88,0xc000);
  FUN_002f27f0(&local_a8,0x10000);
  puVar1 = auStack_7f;
  if (local_88 != 0) {
    puVar1 = local_78;
  }
  __s = (void *)((long)&uStack_a0 + 1);
  if (local_a8 != 0) {
    __s = local_98;
  }
  memset(__s,0,0x10000);
  lVar7 = 0;
  lVar6 = 0;
  do {
    local_ac = *(undefined4 *)((long)&DAT_03a28c84 + lVar7);
    nn::ssl::BuiltInManager::GetBuiltInCertificateBufSize(&uStack_b0,(CaCertificateId *)&local_ac,1)
    ;
    uVar3 = nn::ssl::BuiltInManager::GetBuiltInCertificates
                      (&local_b8,puVar1,0xc000,(CaCertificateId *)&local_ac,1);
    if (uVar3 == 0) {
      local_68 = *(size_t **)(local_b8 + 0x10);
      lVar4 = FUN_00460a60(0,&local_68,*(undefined4 *)(local_b8 + 8));
                    /* try { // try from 004f9f40 to 004f9f47 has its CatchHandler @ 004fa07c */
      FUN_00443d70();
      lVar5 = FUN_00403d80();
      if (lVar4 == 0) {
        bVar2 = true;
        if (lVar5 != 0) goto LAB_004f9ff4;
      }
      else {
        if (lVar5 == 0) {
          bVar2 = true;
        }
        else {
                    /* try { // try from 004f9f54 to 004f9f5f has its CatchHandler @ 004fa05c */
          FUN_004e3220(lVar5,lVar4);
                    /* try { // try from 004f9f60 to 004f9f63 has its CatchHandler @ 004fa058 */
          FUN_00401770();
          local_68 = (size_t *)0x0;
                    /* try { // try from 004f9f68 to 004f9f7f has its CatchHandler @ 004fa068 */
          FUN_00404920(lVar5,0x73,0,&local_68);
          FUN_00401770();
          if (((local_68 == (size_t *)0x0) || ((void *)local_68[1] == (void *)0x0)) ||
             (0xffffU - lVar6 <= *local_68 - 1)) {
            bVar2 = true;
          }
          else {
            memcpy((void *)((long)__s + lVar6),(void *)local_68[1],*local_68);
            bVar2 = false;
            lVar6 = *local_68 + lVar6;
          }
LAB_004f9ff4:
                    /* try { // try from 004f9ff4 to 004f9ffb has its CatchHandler @ 004fa064 */
          FUN_00403ee0(lVar5);
          if (lVar4 == 0) goto joined_r0x004fa014;
        }
                    /* try { // try from 004fa008 to 004fa00f has its CatchHandler @ 004fa060 */
        FUN_00460a80(lVar4);
      }
    }
    else {
      bVar2 = true;
      if ((uVar3 & 0x3fffff) == 0xca7b) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/load_system_roots_nintendo.cc"
                     ,0x57,2,"Failed to get built-in CA. nn::ssl library is not initialized.");
      }
      else {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/load_system_roots_nintendo.cc"
                     ,0x59,2,"Failed to get built-in CA. (0x%08x)");
      }
    }
joined_r0x004fa014:
    if ((lVar7 == 0x18) || (lVar7 = lVar7 + 4, bVar2)) {
      if (lVar6 == 0) {
        FUN_002f2710(param_1);
      }
      else {
        param_1[1] = uStack_a0;
        *param_1 = local_a8;
        param_1[3] = lStack_90;
        param_1[2] = (long)local_98;
      }
      return;
    }
  } while( true );
}


