/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310c6c; name: FUN_00310c6c
 */


long * FUN_00310c6c(long *param_1)

{
  long *__src;
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *local_50 [6];
  int local_18 [2];
  
  if ((char)param_1[7] != '\0') {
    FUN_0030f640(local_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                 ,0x314);
                    /* try { // try from 00310c9c to 00310caf has its CatchHandler @ 00310df4 */
    uVar1 = FUN_0030f3ac(local_50,"CHECK failed: !had_error_: ");
                    /* try { // try from 00310cb0 to 00310cb7 has its CatchHandler @ 00310df0 */
    FUN_0030f41c(local_18,uVar1);
    FUN_0030f658(local_50);
  }
  if (param_1[6] == 0) {
    *(undefined1 *)(param_1 + 7) = 1;
LAB_00310d68:
    *param_1 = (long)(param_1 + 4);
  }
  else {
    __src = param_1 + 2;
    if ((void *)param_1[1] == (void *)0x0) {
      local_50[0] = (long *)*param_1;
      plVar3 = param_1 + 4;
      lVar5 = local_50[0][1];
      lVar4 = *local_50[0];
    }
    else {
      memcpy((void *)param_1[1],__src,*param_1 - (long)__src);
      do {
        uVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],local_50,local_18);
        if ((uVar2 & 1) == 0) {
          *(undefined1 *)(param_1 + 7) = 1;
          goto LAB_00310d68;
        }
      } while (local_18[0] == 0);
      if (0x10 < local_18[0]) {
        lVar4 = *(long *)*param_1;
        local_50[0][1] = ((long *)*param_1)[1];
        *local_50[0] = lVar4;
        *param_1 = (long)local_50[0] + (long)local_18[0] + -0x10;
        param_1[1] = 0;
        return local_50[0];
      }
      if (local_18[0] < 1) {
        FUN_0030f640(local_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                     ,0x32a);
                    /* try { // try from 00310da8 to 00310dbb has its CatchHandler @ 00310dec */
        uVar1 = FUN_0030f3ac(local_50,"CHECK failed: size > 0: ");
                    /* try { // try from 00310dbc to 00310dc3 has its CatchHandler @ 00310de8 */
        FUN_0030f41c(auStack_58,uVar1);
        FUN_0030f658(local_50);
      }
      plVar3 = (long *)((long)param_1 + (long)local_18[0] + 0x10);
      lVar5 = ((long *)*param_1)[1];
      lVar4 = *(long *)*param_1;
    }
    param_1[3] = lVar5;
    *__src = lVar4;
    *param_1 = (long)plVar3;
    param_1[1] = (long)local_50[0];
  }
  return param_1 + 2;
}


