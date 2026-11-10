/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008577b0; name: FUN_008577b0
 */


void FUN_008577b0(long *param_1,long *param_2)

{
  ErrorResultVariant *this;
  long lVar1;
  int local_88 [4];
  int local_78 [4];
  undefined4 local_68 [2];
  
  this = (ErrorResultVariant *)((ulong)local_88 | 4);
  lVar1 = *(long *)PTR_DAT_043774c8;
  do {
    switch((int)param_1[0x16]) {
    case 1:
    case 3:
      FUN_008248c4(param_1 + 0xd,lVar1);
      break;
    case 2:
      (**(code **)(*param_1 + 0x18))(local_78,param_1);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      FUN_007f1af0(param_1 + 6,*(undefined2 *)((long)param_1 + 0x1a));
      if ((param_1[0x19] != 0) && (FUN_008561a0(local_88), local_88[0] != 0)) {
        FUN_007ee660(local_78,local_88);
      }
      if (local_78[0] != 0) {
        local_88[0] = 0x2c03;
        local_68[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
        if (local_78[0] != local_88[0]) {
          local_88[0] = 0x4c0d;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
          if (local_78[0] != local_88[0]) {
            local_88[0] = 0x2c09;
            local_68[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
            if (local_78[0] != local_88[0]) {
              FUN_007ee660(param_1 + 0x17,local_78);
              *(undefined4 *)(param_1 + 0x16) = 3;
              break;
            }
            if (*(int *)((long)param_1 + 0xb4) == 0) break;
          }
          FUN_008248c4(param_1 + 0xd,(lVar1 * *(int *)((long)param_1 + 0xb4)) / 1000);
          break;
        }
      }
      break;
    case 0x11:
      *(undefined4 *)(param_1 + 0x16) = 1;
      break;
    case 0x12:
      *(undefined4 *)(param_1 + 0x16) = 2;
      break;
    case 0x14:
      (**(code **)(*param_2 + 0x38))(param_2,0);
      (**(code **)(*(long *)param_1[0xc] + 0x78))();
      *(undefined4 *)(param_1 + 0x16) = 4;
      return;
    }
  } while( true );
}


