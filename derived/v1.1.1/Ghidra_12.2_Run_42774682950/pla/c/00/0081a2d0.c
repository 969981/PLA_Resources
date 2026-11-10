/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081a2d0; name: FUN_0081a2d0
 */


void FUN_0081a2d0(undefined8 param_1,long *param_2,long param_3,int *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  int local_60 [5];
  uint local_4c;
  int local_48 [4];
  undefined4 local_38 [2];
  
  piVar3 = local_60;
  if ((param_3 == 0) || (param_4 == (int *)0x0)) {
LAB_0081a310:
    local_48[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_60);
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x20))();
    if (param_5 < uVar2) goto LAB_0081a310;
    local_4c = 0;
    FUN_0080715c(local_48,param_2,param_3,&local_4c,param_5);
    if (local_48[0] == 0) {
      puVar1 = (undefined1 *)(param_3 + (ulong)local_4c);
      *puVar1 = (char)param_2[0x15];
      puVar1[1] = *(undefined1 *)((long)param_2 + 0xa9);
      puVar1[2] = *(undefined1 *)((long)param_2 + 0xaa);
      puVar1[3] = *(undefined1 *)((long)param_2 + 0xab);
      puVar1[4] = *(undefined1 *)((long)param_2 + 0xac);
      puVar1[5] = *(undefined1 *)((long)param_2 + 0xad);
      puVar1[6] = *(undefined1 *)((long)param_2 + 0xae);
      puVar1[7] = *(undefined1 *)((long)param_2 + 0xaf);
      puVar1[8] = (char)param_2[0x16];
      puVar1[9] = *(undefined1 *)((long)param_2 + 0xb1);
      puVar1[10] = *(undefined1 *)((long)param_2 + 0xb2);
      puVar1[0xb] = *(undefined1 *)((long)param_2 + 0xb3);
      puVar1[0xc] = *(undefined1 *)((long)param_2 + 0xb4);
      puVar1[0xd] = *(undefined1 *)((long)param_2 + 0xb5);
      puVar1[0xe] = *(undefined1 *)((long)param_2 + 0xb6);
      puVar1[0xf] = *(undefined1 *)((long)param_2 + 0xb7);
      puVar1[0x10] = (char)param_2[0x17];
      puVar1[0x11] = *(undefined1 *)((long)param_2 + 0xb9);
      puVar1[0x12] = *(undefined1 *)((long)param_2 + 0xba);
      puVar1[0x13] = *(undefined1 *)((long)param_2 + 0xbb);
      puVar1[0x14] = *(undefined1 *)((long)param_2 + 0xbc);
      puVar1[0x15] = *(undefined1 *)((long)param_2 + 0xbd);
      puVar1[0x16] = *(undefined1 *)((long)param_2 + 0xbe);
      puVar1[0x17] = *(undefined1 *)((long)param_2 + 0xbf);
      puVar1[0x18] = (char)param_2[0x18];
      puVar1[0x19] = *(undefined1 *)((long)param_2 + 0xc1);
      puVar1[0x1a] = *(undefined1 *)((long)param_2 + 0xc2);
      puVar1[0x1b] = *(undefined1 *)((long)param_2 + 0xc3);
      puVar1[0x1c] = *(undefined1 *)((long)param_2 + 0xc4);
      puVar1[0x1d] = *(undefined1 *)((long)param_2 + 0xc5);
      puVar1[0x1e] = *(undefined1 *)((long)param_2 + 0xc6);
      puVar1[0x1f] = *(undefined1 *)((long)param_2 + 199);
      *param_4 = ((int)(puVar1 + 0x1f) - (int)param_3) + 1;
      local_60[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_0081a334;
    }
  }
  piVar3 = local_48;
LAB_0081a334:
  FUN_007ee578(param_1,piVar3);
  return;
}


