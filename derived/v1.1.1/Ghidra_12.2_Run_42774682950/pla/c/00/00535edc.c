/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00535edc; name: FUN_00535edc
 */


void FUN_00535edc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  long *plStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lStack_48 = param_2[7];
  param_1[0xd] = lStack_48;
  uStack_68 = 0;
  local_60 = param_2[9];
  plStack_58 = param_2 + 2;
  local_50 = param_2[6];
  local_40 = param_2[8];
  local_38 = param_2[10];
  local_70 = param_1 + 0xe;
                    /* try { // try from 00535f4c to 00535f77 has its CatchHandler @ 00535fd0 */
  lVar1 = FUN_003d7a30(*(undefined8 *)(*param_1 + 0x18),1,PTR_LAB_04374b98,param_1,&local_70);
  *param_3 = lVar1;
  if (lVar1 == 0) {
    FUN_003d7b40(param_1 + 0xe,param_2[1]);
    if (*(long *)(*param_1 + 0x28) != 0) {
                    /* try { // try from 00535f88 to 00535f8b has its CatchHandler @ 00535fcc */
      FUN_003e4ce0(*(long *)(*param_1 + 0x28) + 0x88);
    }
  }
  else {
                    /* try { // try from 00535fa0 to 00535fc3 has its CatchHandler @ 00535fc8 */
    uVar2 = FUN_002f1480();
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0xa5,2,"error: %s",uVar2);
  }
  return;
}


