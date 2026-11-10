/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782c44; name: FUN_00782c44
 */


undefined4 FUN_00782c44(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  
  local_28 = CONCAT44(1,*param_1);
  iVar1 = nn::socket::Poll((pollfd *)&local_28,1,param_4);
  if (iVar1 < 1) {
    if (iVar1 != 0) {
      iVar1 = nn::socket::GetLastErrno();
      if (iVar1 == 9) {
        return 3;
      }
      if (iVar1 != 0xb) {
        if (iVar1 == 0x16) {
          return 3;
        }
        goto LAB_00782cc4;
      }
    }
    uVar2 = 2;
  }
  else {
    if ((local_28 & 0x38000000000000) != 0) {
      return 3;
    }
    if ((local_28 & 0x1000000000000) != 0) {
      uVar2 = FUN_00782ae4(param_1,param_2,param_3);
      return uVar2;
    }
LAB_00782cc4:
    uVar2 = 1;
  }
  return uVar2;
}


