/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033b460; name: FUN_0033b460
 */


void FUN_0033b460(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  ulong local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  ulong local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_30 = (undefined1 *)0x0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (param_1 != 0) {
                    /* try { // try from 0033b480 to 0033b48f has its CatchHandler @ 0033b5b8 */
    FUN_0033b810(&local_70," \'%s\'",param_1);
    if ((local_40 & 1) != 0) {
      *local_30 = 0;
      uStack_38 = 0;
      if ((local_40 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_30);
      }
    }
    local_30 = local_60;
    uStack_38 = uStack_68;
    local_40 = local_70;
  }
                    /* try { // try from 0033b4d8 to 0033b4ef has its CatchHandler @ 0033b5cc */
  FUN_0030f640(&local_70,2,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format_lite.cc"
               ,0x241);
                    /* try { // try from 0033b4f0 to 0033b557 has its CatchHandler @ 0033b5dc */
  uVar1 = FUN_0030f3ac(&local_70,"String field");
  uVar1 = FUN_0030f3e8(uVar1,&local_40);
  uVar1 = FUN_0030f3ac(uVar1," contains invalid ");
  uVar1 = FUN_0030f3ac(uVar1,"UTF-8 data when ");
  uVar1 = FUN_0030f3ac(uVar1,param_2);
  uVar1 = FUN_0030f3ac(uVar1," a protocol ");
  uVar1 = FUN_0030f3ac(uVar1,"buffer. Use the \'bytes\' type if you intend to send raw ");
  uVar1 = FUN_0030f3ac(uVar1,"bytes. ");
  uVar1 = FUN_0030f3e8(uVar1,&local_28);
                    /* try { // try from 0033b558 to 0033b55f has its CatchHandler @ 0033b5c8 */
  FUN_0030f41c(auStack_78,uVar1);
  FUN_0030f658(&local_70);
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_30);
  }
  if ((local_28 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_18);
  return;
}


