/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ec030; name: FUN_003ec030
 */


void FUN_003ec030(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined *local_48;
  void *local_40;
  byte local_38 [8];
  ulong local_30;
  ulong local_28;
  
  if ((param_4 & 1) != 0) {
    return;
  }
  local_48 = PTR_LAB_043737d8;
  local_50 = param_3;
  FUN_002e6390(local_38,"bad uri.%s: \'",0xd,&local_50,1);
  uVar1 = (ulong)local_38 | 1;
  if ((local_38[0] & 1) != 0) {
    uVar1 = local_28;
  }
                    /* try { // try from 003ec088 to 003ec0a7 has its CatchHandler @ 003ec1ec */
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/uri/uri_parser.cc",0x2d,2,"%s%s\'",uVar1,
               param_1);
  uVar1 = (ulong)(local_38[0] >> 1);
  if ((local_38[0] & 1) != 0) {
    uVar1 = local_30;
  }
  uVar1 = uVar1 + param_2;
  local_48 = (undefined *)0x0;
  local_40 = (void *)0x0;
  local_50 = 0;
  if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 003ec19c to 003ec1a3 has its CatchHandler @ 003ec1a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar1 < 0x17) {
    local_50 = (ulong)(byte)((int)uVar1 << 1);
    pvVar2 = (void *)((ulong)&local_50 | 1);
    if (uVar1 == 0) goto LAB_003ec12c;
  }
  else {
    uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_50 = uVar3 | 1;
    local_48 = (undefined *)uVar1;
    local_40 = pvVar2;
  }
  memset(pvVar2,0x20,uVar1);
LAB_003ec12c:
  *(undefined1 *)((long)pvVar2 + uVar1) = 0;
  pvVar2 = local_40;
  if ((local_50 & 1) == 0) {
    pvVar2 = (void *)((long)&local_50 + 1);
  }
                    /* try { // try from 003ec140 to 003ec15b has its CatchHandler @ 003ec1b4 */
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/uri/uri_parser.cc",0x2f,2,"%s^ here",
               pvVar2);
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  return;
}


