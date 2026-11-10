/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e9d70; name: FUN_002e9d70
 */


void FUN_002e9d70(uint param_1,byte param_2,long param_3)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_3 + 0x60);
  pbVar1 = (byte *)(param_3 + 0x55);
  if (pbVar3 < pbVar1) {
    *(byte **)(param_3 + 0x60) = pbVar3 + 1;
    *pbVar3 = param_2;
    pbVar3 = *(byte **)(param_3 + 0x60);
    if ((int)param_1 < 0) {
      if (pbVar1 <= pbVar3) goto LAB_002e9ec8;
      *(byte **)(param_3 + 0x60) = pbVar3 + 1;
      *pbVar3 = 0x2d;
      param_1 = -param_1;
      pbVar3 = *(byte **)(param_3 + 0x60);
    }
    else {
      if (pbVar1 <= pbVar3) goto LAB_002e9ec8;
      *(byte **)(param_3 + 0x60) = pbVar3 + 1;
      *pbVar3 = 0x2b;
      pbVar3 = *(byte **)(param_3 + 0x60);
    }
    if ((int)param_1 < 100) {
      if (pbVar3 < pbVar1) {
        cVar2 = (char)((int)param_1 / 10);
        *(byte **)(param_3 + 0x60) = pbVar3 + 1;
        *pbVar3 = cVar2 + 0x30;
        pbVar3 = *(byte **)(param_3 + 0x60);
        if (pbVar3 < pbVar1) {
          *(byte **)(param_3 + 0x60) = pbVar3 + 1;
          *pbVar3 = (char)param_1 + cVar2 * -10 + 0x30;
          return;
        }
      }
    }
    else if (pbVar3 < pbVar1) {
      *(byte **)(param_3 + 0x60) = pbVar3 + 1;
      *pbVar3 = (char)(param_1 / 100) + 0x30;
      pbVar3 = *(byte **)(param_3 + 0x60);
      if (pbVar3 < pbVar1) {
        cVar2 = (char)(param_1 / 10);
        *(byte **)(param_3 + 0x60) = pbVar3 + 1;
        *pbVar3 = cVar2 + (char)(((ulong)param_1 * 0xcccccccd) / 0x5000000000) * -10 | 0x30;
        pbVar3 = *(byte **)(param_3 + 0x60);
        if (pbVar3 < pbVar1) {
          *(byte **)(param_3 + 0x60) = pbVar3 + 1;
          *pbVar3 = (char)param_1 + cVar2 * -10 | 0x30;
          return;
        }
      }
    }
  }
LAB_002e9ec8:
                    /* WARNING: Subroutine does not return */
  __assert_fail("end < data + sizeof(data)",
                "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc",0x47
                ,"push_back");
}


