/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d42dc; name: FUN_003d42dc
 */


void FUN_003d42dc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  char *local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined8 *puStack_48;
  undefined **local_30;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  if (*param_4 == 0) {
    param_1[5] = 0;
    puVar1 = PTR_FUN_04374060;
    *(undefined2 *)(param_1 + 6) = 0;
    param_1[7] = "external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc";
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[3] = puVar1;
    param_1[4] = param_1;
    *(undefined4 *)(param_1 + 8) = 0x46;
    local_60 = "external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc";
    local_58 = 0x47;
                    /* try { // try from 003d439c to 003d43a7 has its CatchHandler @ 003d43d4 */
    FUN_002f019c(&local_60,param_1 + 2,0);
    return;
  }
  local_50 = PTR_DAT_04374058 + 0x10;
  local_60 = "external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc";
  local_58 = 0x43;
                    /* try { // try from 003d4334 to 003d433f has its CatchHandler @ 003d43e4 */
  puStack_48 = param_1;
  local_30 = &local_50;
  FUN_003d4d40(*param_4,&local_50,&local_60);
  if (&local_50 == local_30) {
    pcVar2 = *(code **)(*local_30 + 0x20);
  }
  else {
    if (local_30 == (undefined **)0x0) {
      return;
    }
    pcVar2 = *(code **)(*local_30 + 0x28);
  }
  (*pcVar2)();
  return;
}


