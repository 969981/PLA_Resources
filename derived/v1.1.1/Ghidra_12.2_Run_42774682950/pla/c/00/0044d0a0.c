/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044d0a0; name: FUN_0044d0a0
 */


undefined8 FUN_0044d0a0(undefined8 *param_1,char *param_2)

{
  long lVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  
  pcVar4 = strchr(param_2,0x3a);
  if (pcVar4 == (char *)0x0) {
    iVar3 = sscanf(param_2,"%d.%d.%d.%d",(int *)&local_58,(int *)&uStack_34,(int *)&local_38,
                   (int *)&local_3c);
    if ((iVar3 == 4) && ((uStack_34 | local_58 | local_38 | local_3c) < 0x100)) {
      *(char *)param_1 = (char)local_58;
      *(char *)((long)param_1 + 1) = (char)uStack_34;
      *(char *)((long)param_1 + 2) = (char)local_38;
      *(char *)((long)param_1 + 3) = (char)local_3c;
      return 4;
    }
    return 0;
  }
  local_48 = -0x100000000;
  local_40 = 0;
  iVar3 = FUN_00415400(param_2,0x3a,0,&LAB_0044dbf0,&local_58);
  if (iVar3 == 0) {
LAB_0044d1bc:
    uVar5 = 0;
  }
  else {
    iVar3 = (int)local_48;
    lVar1 = (long)(int)local_48;
    iVar2 = local_48._4_4_;
    __n = (size_t)local_48._4_4_;
    if (local_48._4_4_ == -1) {
      if ((int)local_48 != 0x10) goto LAB_0044d1bc;
LAB_0044d188:
      param_1[1] = uStack_50;
      *param_1 = CONCAT44(uStack_54,local_58);
    }
    else {
      if (((int)local_48 == 0x10) || (3 < local_40)) goto LAB_0044d1bc;
      if (local_40 == 2) {
        if ((local_48._4_4_ != 0) && ((int)local_48 != local_48._4_4_)) goto LAB_0044d1bc;
      }
      else if (local_40 == 3) {
        if (0 < (int)local_48) goto LAB_0044d1bc;
      }
      else {
        if (local_48._4_4_ == 0) {
          return 0;
        }
        if ((int)local_48 == local_48._4_4_) {
          return 0;
        }
      }
      if (local_48 < 0) goto LAB_0044d188;
      memcpy(param_1,&local_58,__n);
      memset((undefined1 *)((long)param_1 + __n),0,0x10 - lVar1);
      if (iVar3 == iVar2) {
        return 0x10;
      }
      memcpy((undefined1 *)((long)param_1 + __n) + (0x10 - lVar1),(void *)((long)&local_58 + __n),
             (long)(iVar3 - iVar2));
    }
    uVar5 = 0x10;
  }
  return uVar5;
}


