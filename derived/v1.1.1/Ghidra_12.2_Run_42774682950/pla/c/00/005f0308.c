/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f0308; name: FUN_005f0308
 */


void FUN_005f0308(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *__s;
  ulong uVar4;
  
  *param_1 = &PTR_LAB_0418edb8;
  if (*(char *)(param_1[4] + 0x10) != '\0') {
                    /* try { // try from 005f03dc to 005f03fb has its CatchHandler @ 005f0400 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x1a0,1,"[%s %p] Destroying subchannel_list %p",*(undefined8 *)(param_1[4] + 8),
                 param_1[3],param_1);
  }
  uVar2 = param_1[5];
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 6;
  }
  else {
    __s = (undefined8 *)param_1[6];
    if (__s == (undefined8 *)0x0) {
      uVar1 = 0;
      goto LAB_005f03bc;
    }
  }
  if (uVar2 >> 1 != 0) {
    uVar4 = uVar2 >> 1;
    puVar3 = __s + uVar4 * 5;
    do {
      puVar3 = puVar3 + -5;
      uVar4 = uVar4 - 1;
      (**(code **)*puVar3)(puVar3);
    } while (uVar4 != 0);
  }
  memset(__s,0xab,(uVar2 >> 1) * 0x28);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    return;
  }
  uVar1 = param_1[6];
LAB_005f03bc:
  FUN_002e2ea0(PTR_LAB_04373088,uVar1);
  return;
}


