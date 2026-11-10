/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00246930; name: FUN_00246930
 */


void FUN_00246930(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_58 [4];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) {
    if (((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) && (*(char *)(param_1 + 0x54) == '\0'))
    goto LAB_00246980;
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
LAB_00246980:
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = *(long *)(param_1 + 0x48) + 0x40;
  FUN_00877d98(param_3,local_58[0],local_58 + 1,0);
  FUN_008779b0(param_3,1,local_58,0);
  FUN_00877ab4(param_3,*(long *)(param_1 + 0x48) + 0x88);
  FUN_00247844(param_1,param_2,param_3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_38 = plVar1[1];
  local_58[3] = *plVar1 + (long)*(int *)(param_1 + 0x50);
  lVar2 = *(long *)(param_2 + 0xb8);
  FUN_00878324(param_3,*(undefined4 *)
                        (*(long *)(*(long *)(param_1 + 0x38) + 0x18) +
                        (long)*(int *)(param_1 + 0x40) * 4),0,local_58 + 3,0x230);
  FUN_00877574(param_3,3,1,lVar2 + 0x248,6,0);
  FUN_008780e0(param_3,0x80);
  FUN_00878108(param_3,0x20);
  FUN_0022d778(param_2,param_3);
  if (((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0)) &&
     ((*(byte *)(*(long *)(param_1 + 8) + 4) >> 1 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}


