/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012206e0; name: FUN_012206e0
 */


bool FUN_012206e0(long param_1)

{
  if ((((((((*(int *)(param_1 + 0x169c) == 0) && (*(int *)(param_1 + 0x16a0) == 0)) &&
          (*(int *)(param_1 + 0x16a4) == 0)) &&
         (((*(int *)(param_1 + 0x16a8) == 0 && (*(int *)(param_1 + 0x16ac) == 0)) &&
          ((*(int *)(param_1 + 0x16b0) == 0 &&
           ((*(int *)(param_1 + 0x16b4) == 0 && (*(int *)(param_1 + 0x16b8) == 0)))))))) &&
        (*(int *)(param_1 + 0x16bc) == 0)) &&
       ((((((*(int *)(param_1 + 0x16c0) == 0 && (*(int *)(param_1 + 0x16c4) == 0)) &&
           (*(int *)(param_1 + 0x16c8) == 0)) &&
          ((*(int *)(param_1 + 0x16cc) == 0 && (*(int *)(param_1 + 0x16d0) == 0)))) &&
         (*(int *)(param_1 + 0x16d4) == 0)) &&
        (((*(int *)(param_1 + 0x16d8) == 0 && (*(int *)(param_1 + 0x16dc) == 0)) &&
         (((*(int *)(param_1 + 0x16e0) == 0 &&
           (((*(int *)(param_1 + 0x16e4) == 0 && (*(int *)(param_1 + 0x16e8) == 0)) &&
            (*(int *)(param_1 + 0x16ec) == 0)))) &&
          (((*(int *)(param_1 + 0x16f0) == 0 && (*(int *)(param_1 + 0x16f4) == 0)) &&
           (*(int *)(param_1 + 0x16f8) == 0)))))))))) &&
      (((*(int *)(param_1 + 0x16fc) == 0 && (*(int *)(param_1 + 0x1700) == 0)) &&
       ((*(int *)(param_1 + 0x1704) == 0 &&
        (((*(int *)(param_1 + 0x1708) == 0 && (*(int *)(param_1 + 0x170c) == 0)) &&
         (*(int *)(param_1 + 0x1710) == 0)))))))) &&
     ((*(int *)(param_1 + 0x1714) == 0 && (*(int *)(param_1 + 0x1718) == 0)))) {
    return *(int *)(param_1 + 0x171c) != 0;
  }
  return true;
}


