/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320d20; name: FUN_00320d20
 */


undefined1  [16] FUN_00320d20(char *param_1,long *param_2)

{
  uint uVar1;
  char *__nptr;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  double dVar10;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar11 [16];
  char *local_90;
  undefined1 auStack_88 [8];
  ulong local_80;
  undefined8 local_78;
  char *local_70;
  char cStack_51;
  char *local_50 [2];
  
  dVar10 = strtod(param_1,&local_90);
  if (param_2 == (long *)0x0) {
    cVar2 = *local_90;
  }
  else {
    *param_2 = (long)local_90;
    cVar2 = *local_90;
  }
  uVar7 = extraout_var;
  if (cVar2 == '.') {
    iVar6 = snprintf((char *)local_50,0x10,"%.1f",0x3ff8000000000000);
    if ((char)local_50[0] != '1') {
      FUN_0030f640(&local_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x982);
                    /* try { // try from 00320db8 to 00320dcb has its CatchHandler @ 00320f88 */
      uVar7 = FUN_0030f3ac(&local_80,"CHECK failed: (temp[0]) == (\'1\'): ");
                    /* try { // try from 00320dcc to 00320dd3 has its CatchHandler @ 00320f84 */
      FUN_0030f41c(auStack_88,uVar7);
      FUN_0030f658(&local_80);
    }
    if (*(char *)((long)local_50 + (long)iVar6 + -1) != '5') {
      FUN_0030f640(&local_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x983);
                    /* try { // try from 00320e08 to 00320e1b has its CatchHandler @ 00320f80 */
      uVar7 = FUN_0030f3ac(&local_80,"CHECK failed: (temp[size - 1]) == (\'5\'): ");
                    /* try { // try from 00320e1c to 00320e23 has its CatchHandler @ 00320f7c */
      FUN_0030f41c(auStack_88,uVar7);
      FUN_0030f658(&local_80);
    }
    if (6 < iVar6) {
      FUN_0030f640(&local_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                   ,0x984);
                    /* try { // try from 00320e4c to 00320e5f has its CatchHandler @ 00320f78 */
      uVar7 = FUN_0030f3ac(&local_80,"CHECK failed: (size) <= (6): ");
                    /* try { // try from 00320e60 to 00320e67 has its CatchHandler @ 00320f74 */
      FUN_0030f41c(auStack_88,uVar7);
      FUN_0030f658(&local_80);
    }
    local_78 = 0;
    local_70 = (char *)0x0;
    local_80 = 0;
    sVar8 = strlen(param_1);
                    /* try { // try from 00320e88 to 00320ed7 has its CatchHandler @ 00320f9c */
    FUN_0030ff7c(&local_80,sVar8 + (long)iVar6 + -3);
    FUN_003219ac(&local_80,param_1,local_90);
    FUN_002e4094(&local_80,(ulong)local_50 | 1,(long)(iVar6 + -2));
    sVar8 = strlen(local_90 + 1);
    FUN_002e4094(&local_80,local_90 + 1,sVar8);
    __nptr = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      __nptr = local_70;
    }
    dVar10 = strtod(__nptr,local_50);
    uVar4 = local_80;
    uVar7 = extraout_var_00;
    if ((param_2 != (long *)0x0) &&
       (lVar9 = CONCAT71(local_50[0]._1_7_,(char)local_50[0]) - (long)__nptr,
       (long)local_90 - (long)param_1 < lVar9)) {
      uVar5 = (uint)local_78;
      bVar3 = (byte)local_80 >> 1;
      sVar8 = strlen(param_1);
      uVar1 = (uint)bVar3;
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar5;
      }
      *param_2 = (long)(param_1 + (lVar9 - (int)(uVar1 - (int)sVar8)));
    }
    if ((uVar4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = dVar10;
  return auVar11;
}


