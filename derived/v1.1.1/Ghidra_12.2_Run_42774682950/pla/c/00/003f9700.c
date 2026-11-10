/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f9700; name: FUN_003f9700
 */


void FUN_003f9700(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  char *local_38;
  char *local_28;
  
  FUN_002f2710();
  uVar4 = FUN_004f9e00();
  FUN_004f9df0(&local_28);
                    /* try { // try from 003f9734 to 003f975f has its CatchHandler @ 003f98f0 */
  if ((*local_28 != '\0') && (lVar5 = FUN_003fa130(local_28,1,param_1), lVar5 != 0)) {
    FUN_002f1e00("load_file",lVar5,
                 "external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0x21e);
  }
  lVar5 = *param_1;
  uVar7 = param_1[1];
  uVar8 = uVar7 & 0xff;
  uVar1 = uVar8;
  if (lVar5 != 0) {
    uVar1 = uVar7;
  }
  iVar3 = 2;
  if ((DAT_0439cd48 != (code *)0x0) && (uVar1 == 0)) {
    local_38 = (char *)0x0;
                    /* try { // try from 003f9788 to 003f978f has its CatchHandler @ 003f98dc */
    iVar3 = (*DAT_0439cd48)(&local_38);
    pcVar2 = local_38;
    if (iVar3 == 0) {
      if (local_38 == (char *)0x0) {
                    /* try { // try from 003f9874 to 003f989b has its CatchHandler @ 003f98dc */
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x226,2,"assertion failed: %s","pem_root_certs != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      sVar6 = strlen(local_38);
                    /* try { // try from 003f97ac to 003f97b7 has its CatchHandler @ 003f989c */
      FUN_002f2f40(&local_58,pcVar2,sVar6 + 1);
      param_1[1] = lStack_50;
      *param_1 = local_58;
      param_1[3] = lStack_40;
      param_1[2] = local_48;
    }
                    /* try { // try from 003f97c8 to 003f97cb has its CatchHandler @ 003f98dc */
    free(local_38);
    lVar5 = *param_1;
    uVar7 = param_1[1];
    uVar8 = uVar7 & 0xff;
  }
  if (lVar5 != 0) {
    uVar8 = uVar7;
  }
  if ((uVar4 & 1) == 0 && uVar8 == 0) {
                    /* try { // try from 003f97ec to 003f97f3 has its CatchHandler @ 003f98b0 */
    FUN_004f9e10(&local_58);
    param_1[1] = lStack_50;
    *param_1 = local_58;
    param_1[3] = lStack_40;
    param_1[2] = local_48;
    lVar5 = *param_1;
    uVar7 = param_1[1];
  }
  uVar4 = uVar7 & 0xff;
  if (lVar5 != 0) {
    uVar4 = uVar7;
  }
                    /* try { // try from 003f981c to 003f984f has its CatchHandler @ 003f98c8 */
  if (((iVar3 != 1) && (uVar4 == 0)) &&
     (lVar5 = FUN_003fa130("/usr/share/grpc/roots.pem",1,param_1), lVar5 != 0)) {
    FUN_002f1e00("load_file",lVar5,
                 "external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0x235);
  }
  pcVar2 = local_28;
  local_28 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
                    /* try { // try from 003f985c to 003f985f has its CatchHandler @ 003f98c4 */
    free(pcVar2);
  }
  return;
}


