/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853b38; name: FUN_00853b38
 */


void FUN_00853b38(undefined8 param_1,long param_2,int *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_ba0 [8];
  undefined1 auStack_b98 [20];
  undefined4 local_b84;
  undefined *local_b80;
  undefined2 local_b78;
  undefined1 local_b76;
  ulong local_b74;
  undefined1 auStack_b6c [1436];
  undefined4 local_5d0 [360];
  
  if (*param_3 == 0) {
    local_b80 = (undefined *)CONCAT44(local_b80._4_4_,0x10407);
    local_5d0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_b80 | 4),(Result *)local_5d0);
    FUN_007ee578(param_1,&local_b80);
  }
  else {
    local_b78 = 0;
    local_b76 = 0;
    local_b80 = PTR_DAT_04378080 + 0x10;
    local_b74 = 0;
    memset(auStack_b6c,0,0x595);
    local_b78 = CONCAT11(0xff,param_4);
    local_b74 = local_b74 & 0xffffffff;
    FUN_008533e8(auStack_b98,&local_b80,local_5d0,&local_b84,0x5a0);
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    memcpy(auStack_ba0,param_3,4);
    FUN_0084de14(param_1,uVar1,auStack_ba0,local_5d0,local_b84,0);
  }
  return;
}


